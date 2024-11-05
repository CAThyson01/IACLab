#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env)
{
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    Vf1_fsm *top = new Vf1_fsm;
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("f1_fsm.vcd");

    if (vbdOpen() != 1) return -1;
    vbdHeader("Lab 3: FSM");
    // vbdSetMode(1);

    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    top->rst = 0;
    int startCount = 0;
    for (i = 0; i < 1000000; i++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }
        top->rst = (i < 2); // assert reset for 1st cycle
        top->en = (i > 2);
        vbdBar(top->data_out & 0xFF);
        if (top->data_out == 1) {
            startCount = 1;
        }
        if (startCount == 1 && top->data_out == 0) {
            startCount = 0;
            vbdInitWatch();
            int flag = 0;
            while (flag == 0) {
                flag = vbdFlag();
            }
            int elapsed = vbdElapsed();
            vbdHex(4, (elapsed >> 16) & 0xF);
            vbdHex(3, (elapsed >> 8) & 0xF);
            vbdHex(2, (elapsed >> 4) & 0xF);
            vbdHex(1, (elapsed) & 0xF);
        }

        vbdCycle(i + 1);


        
        if (Verilated::gotFinish()) 
            exit(0);                // ... exit if finish OR 'q' pressed              // ... exit if finish OR 'q' pressed
            
    }

    vbdClose();
    tfp->close();
    exit(0);
}