LOOP_VALIDATE?=2

all: posedge_clk_nonprofiling posedge_clk_profiling posedge_validate_nonprofiling posedge_validate_profiling
	rm posedge_clk/temp posedge_validate/temp

compare: compare_nonprofiling compare_profiling
	cat nonprofiling.diff
	cat profiling.diff

compare_nonprofiling: posedge_clk/nonprofiling posedge_validate/nonprofiling
	-diff -u posedge_clk/nonprofiling posedge_validate/nonprofiling > nonprofiling.diff

compare_profiling:posedge_clk/profiling posedge_validate/profiling
	-diff -u posedge_clk/profiling posedge_validate/profiling > profiling.diff

posedge_clk_nonprofiling:
	cd posedge_clk \
	&& verilator -GLOOP_VALIDATE=$(LOOP_VALIDATE) --timescale "1ns/1ns" --timing --binary --top-module tb performance_degrade.sv \
	&& /usr/bin/time -o nonprofiling ./obj_dir/Vtb 2>&1 > nonprofiling \
	&& cd ..

posedge_clk_profiling:
	cd posedge_clk \
	&& verilator -GLOOP_VALIDATE=$(LOOP_VALIDATE) --prof-cfuncs --timescale "1ns/1ns" --timing --binary --top-module tb performance_degrade.sv \
	&& /usr/bin/time -o profiling ./obj_dir/Vtb 2>&1 > profiling \
	&& gprof ./obj_dir/Vtb gmon.out > gmon.log \
	&& verilator_profcfunc gmon.log > gmon.log2 \
	&& cd ..

posedge_validate_nonprofiling:
	cd posedge_validate \
	&& verilator -GLOOP_VALIDATE=$(LOOP_VALIDATE) --timescale "1ns/1ns" --timing --binary --top-module tb performance_degrade.sv \
	&& /usr/bin/time -o nonprofiling ./obj_dir/Vtb 2>&1 > nonprofiling \
	&& cd ..

posedge_validate_profiling:
	cd posedge_validate \
	&& verilator -GLOOP_VALIDATE=$(LOOP_VALIDATE) --prof-cfuncs --timescale "1ns/1ns" --timing --binary --top-module tb performance_degrade.sv \
	&& /usr/bin/time -o profiling ./obj_dir/Vtb 2>&1 > profiling \
	&& gprof ./obj_dir/Vtb gmon.out > gmon.log \
	&& verilator_profcfunc gmon.log > gmon.log2 \
	&& cd ..

clean:
	rm -r ./posedge_clk/{gmon.*,profiling,nonprofiling,temp,obj_dir} ./posedge_validate/{gmon.*,profiling,nonprofiling,temp,obj_dir}