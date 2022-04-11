verilator build:
	verilator --cc -f flist -exe sim_main.cpp --top-module fp_tb -Wno-WIDTH -Wno-LITENDIAN -Wno-UNOPTFLAT -Wno-UNSIGNED --trace 
	make -C obj_dir/ -f Vfp_tb.mk OPT_FAST="-O2"
	./obj_dir/Vfp_tb
clean:
	rm -rf obj_dir logs