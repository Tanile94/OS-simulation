#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// global variables

// function prototypes

// channel commands from the simulator.
void siodisk(long jobnum);
void siodrum(long jobnum, long jobsize, long coreaddress, long direction);
    // direction: 1 - core to drum, 0 - drum to core.

// for debugging use.
void ontrace();
void offtrace();

void startup()
{
    // initializes the system.
    // called once at startup.
}

//--------------------//
// interrupt handlers //
//--------------------//

void Crint(long &a, long p[])
{
    // indicates arrival of new job on drum.
}

void Dskint(long &a, long p[])
{
    // disk interrupt.
}

void Drmint(long &a, long p[])
{
    // drum interrupt.
}

void Tro(long &a, long p[])
{
    // timer-run-out.
}

void Svc(long &a, long p[])
{
    // user program supervisor call.
}

//--------------------------//
// any additional functions //
//--------------------------//
