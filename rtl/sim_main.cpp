#include <stdlib.h>
#include <iostream>
#include <utility>
#include <string>
#include "Vfp_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


unsigned int main_time = 0;
// or
//vluint64_t main_time = 0;

double sc_time_stamp () {
    return main_time;
}

int main (int argc, char **argv) {

    std::cout << "\nVerilatorTB: Start of sim\n" << std::endl; 

    Verilated::commandArgs(argc, argv);

    Vfp_tb* top = new Vfp_tb;

    // init trace dump
    //VerilatedVcdC* tfp = NULL;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    // if initialized above
    //tfp = new VerilatedVcdC;


    top->trace (tfp, 99);
    Verilated::mkdir("logs");
    tfp->open("logs/sim.vcd");

    top -> clk_i = 0;
    top -> rst_ni = 1;
   
    while (main_time < 1000 && !Verilated::gotFinish()) 
    { 
        top->clk_i = top->clk_i ? 0 : 1;       // Toggle clock
        top->eval();

        if(main_time == 16) {
            top->rst_ni = 0;
        } 
        if(main_time == 20) {
            top->rst_ni = 1;
        }

        // redundant
        //top -> eval();

        if (tfp) tfp -> dump(main_time);
        // or dump always
        //tfp -> dump(main_time);

        main_time ++;
    }

    top -> final();

    if (tfp) tfp -> close();
    // or close anyways
    //tfp -> close();

    delete top;

    std::cout << "\nVerilatorTB: End of sim" << std::endl;
    //exit(EXIT_SUCCESS);
    exit(0);
}