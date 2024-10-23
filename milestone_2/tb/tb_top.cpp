#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string>
#include <iostream>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vtop.h"
#include "driver.cpp"

#define MAX_SIM       2000
vluint64_t sim_unit = 0;
vluint64_t sim_time = 0;

void dut_clock(Vtop *dut, VerilatedFstC *vtrace);
void get_expected(Vtop *dut);
void monitor_proc(Vtop *dut);
void monitor_outputs(Vtop *dut);

void initial(Vtop *dut) {
    // Set i_rst_n to 0 at the start
    dut->i_rst_n = 0;
}

void dut_clock(Vtop *dut, VerilatedFstC *vtrace) {
    sim_time = sim_unit * 10 + 1;
    if (vtrace)
        vtrace->dump(sim_time); // Dump values to update inputs

    sim_time = sim_time + 4;
    dut->i_clk = 0;
    dut->eval();
    if (vtrace)
        vtrace->dump(sim_time); // Dump values after negedge

    monitor_outputs(dut); // Values are "stable" to monitor

    sim_time = sim_time + 5;
    dut->i_clk = 1;
    dut->eval();
    if (vtrace) {
        vtrace->dump(sim_time); // Dump values after posedge
        //vtrace->flush();
    }
}

void get_expected(Vtop *dut) {
}

void monitor_proc(Vtop *dut) {
    
}

void monitor_outputs(Vtop *dut) {

}

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);

    Vtop *dut = new Vtop;

    Verilated::traceEverOn(true);
    VerilatedFstC *vtrace = new VerilatedFstC;
    dut->trace(vtrace, 2); // trace down to 2 hierarchy
    vtrace->open("wave.fst");
    vtrace->dump(0);

    srand(time(NULL));
    initial(dut);
    
    dut->eval();

    while (sim_unit < MAX_SIM) {
        dut_clock(dut, vtrace);

        // After the first clock cycle, release reset
        if (sim_unit == 1) {
            dut->i_rst_n = 1;
        }

        get_expected(dut);
        dut->eval();
        monitor_proc(dut);
        sim_unit++;
    }

    vtrace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
