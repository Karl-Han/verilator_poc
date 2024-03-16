# Performance Degradation PoC

The `performance_degrade.sv` in both `posedge_clk` and `posedge_validate` are simplified version of the original Wally code. And it is more concise to work on as Proof of Concept.

As the Wally code, there are two version of same code with `Validate` is a synchronous signal that valid for one cycle of testing:

- posedge clk version: if(Validate) block is put inside an always @(posedge clk) block.
- posedge validate version: if(Validate) block is put into another always @(posedge Validate) block

Tasks:

- `do_something_here_SelectTest`: some work with synchronous signal `SelectTest` similar to Validate
- `do_something_here_Validate`: heavy system call, writing to file in this case, with synchronous signal `SelectTest` similar to Validate

```systemverilog
// posedge clk version
    always @(posedge clk) begin
        if(SelectTest) do_something_here_SelectTest(counter_global);
        if(Validate) do_something_here_Validate(counter_global);
    end

// posedge validate version
    always @(posedge clk) begin
        if(SelectTest) do_something_here_SelectTest(counter_global);
    end
    always @(posedge Validate)
        if(Validate) do_something_here_Validate(counter_global);
```

```diff
$ diff posedge_clk/performance_degrade.sv posedge_validate/performance_degrade_posedge_validate.sv 
63d62
<         if(Validate) do_something_here_Validate(counter_global);
64a64,65
>     always @(posedge Validate)
>         if(Validate) do_something_here_Validate(counter_global);

```

## Expectation

The expectation was that posedge clk version, while increasing the number of checks performed due to its placement in a clocked process, would not significantly impact overall performance as it is executed the same amount of time as the posedge validate version.

## Makefile Command

Check out `Makefile` for all the command, the simpliest command is `make all`.

Examples:

- `make all LOOP_VALIDATE=4`: make the performance difference larger
- `make compare_profiling`
- `make clean`: clean up

## Performance Difference

Parameter `LOOP_VALIDATE` is an integer to control the load of work.

Command: 
- non-profiling: `verilator -GLOOP_VALIDATE=2 --timescale "1ns/1ns" --timing --binary --top-module tb performance_degrade[_posedge_validate].sv`
- profiling: `verilator -GLOOP_VALIDATE=2 --prof-cfuncs --timescale "1ns/1ns" --timing --binary --top-module tb performance_degrade_posedge_validate.sv`

With `LOOP_VALIDATE = 2`, the time (sys/user/elpased) are as follows:

|    | non-profiling | profiling |
| --- | -- | --- |
| posedge_clk | 31.74s | 35.78s |
| posedge_validate | 16.18s | 18.21s |

