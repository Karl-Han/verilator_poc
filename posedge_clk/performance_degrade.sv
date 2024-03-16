module tb;
    parameter integer LOOP_VALIDATE = 1;

    logic clk;
    logic SelectTest, Validate;
    integer counter_global;

    // cycle time is 20
    always #10 clk = !clk;

    initial begin
        clk = 0;
        SelectTest = 0;
        #200;
        for(counter_global = 0; counter_global < 5; counter_global++) begin
            @(posedge clk);
            SelectTest = 1;
            @(negedge clk);
            SelectTest = 0;
            #100;

            @(posedge clk);
            Validate = 1;
            @(negedge clk);
            Validate = 0;
        end
        $finish;
    end

    task do_something_here_SelectTest;
        input integer ctr;
        integer fd1, fd2;
        $display("[SelectTest]Start: %d", ctr);
        fd1 = $fopen("performance_degrade.sv", "r");
        while(!$feof(fd1)) begin
            integer code;
            string line;
            code = $fscanf(fd1, "%s\n", line);
        end
        $display("[SelectTest]Done: %d", ctr);
    endtask

    task do_something_here_Validate;
        input integer ctr;
        int unsigned i;
        integer fd;
        $display("[Validate]Start: %d", ctr);
        i = 1;
        for(integer j = 0; j < LOOP_VALIDATE; j++) begin
            fd = $fopen("temp", "w");
            while(i != 0) begin
                i++;
                if(i % (2**10) == 1)$fdisplay(fd, "%d\n", i);
            end
            $fclose(fd);
            i = 1;
        end
        $display("[Validate]Done: %d", ctr);
    endtask

    always @(posedge clk) begin
        if(SelectTest) do_something_here_SelectTest(counter_global);
        if(Validate) do_something_here_Validate(counter_global);
    end

endmodule