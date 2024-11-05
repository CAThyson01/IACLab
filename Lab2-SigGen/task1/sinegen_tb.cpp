#include "Vsinegen.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env)
{
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    Vsinegen *top = new Vsinegen;
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("sinegen.vcd");

    if (vbdOpen() != 1) return -1;
    vbdHeader("Lab 2: Sinegen");

    top->clk = 1;
    top->rst = 1;
    top->en = 0;
    top->incr = 1;

    top->rst = 0;
    for (i = 0; i < 1000000; i++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }
        
        top -> incr = vbdValue();
        // vbdHex(4, (int(top -> count) >> 16) & 0xF);
        // vbdHex(3, (int(top -> count) >> 8) & 0xF);
        // vbdHex(2, (int(top -> count) >> 4) & 0xF);
        // vbdHex(1, (int(top -> count)) & 0xF);
        vbdPlot(int(top->dout), 0, 255);
        vbdCycle(i + 1);

        top -> en = vbdFlag();
        // either simulation finished, or 'q' is pressed
            // either simulation finished, or 'q' is pressed
         if (Verilated::gotFinish()) 
            exit(0);                // ... exit if finish OR 'q' pressed              // ... exit if finish OR 'q' pressed
            
    }

    vbdClose();
    tfp->close();
    exit(0);
}