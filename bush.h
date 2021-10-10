#ifndef __bush__
#define __bush__

//------------------------------------------------------------------------------
// bush.h - contains bush description and its interface
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"

// bush
struct bush {
    char* name; // bush name
    int length; // name length
    enum month {
        SEPTEMBER,
        SPOOKTOBER,
        NONUTNOVEMBER,
        INCORRECT_MONTH
    };
    month month;
};

// Bush parameters input from file
void In(bush& b, ifstream& ifst);

// Random bush parameters input
void InRnd(bush& b);

// Bush parameters output in formative stream
void Out(bush& b, ofstream& ofst);

// Computing bush fraction
double Fraction(bush& b);

#endif //__bush__
