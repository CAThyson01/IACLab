rm -rf obj_dir
rm -f sinegen.vcd

verilator -Wall --cc --trace ./task1/sinegen.sv --exe ./task1/sinegen_tb.cpp

make -j -C obj_dir/ -f Vsinegen.mk Vsinegen

obj_dir/Vsinegen