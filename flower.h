#ifndef __flower__
#define __flower__

//------------------------------------------------------------------------------
// flower.h - contains flower description and its interface
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"

// flower
struct flower {
    char* name; // flower name
    int length; // name lengths
};

// Flower parameters input from file
void In(flower& f, ifstream& ifst);

// Random flower parameters input
void InRnd(flower& f);

// Flower parameters output in formative stream
void Out(flower& f, ofstream& ofst);

// Computing flower fraction
double Fraction(flower& f);

#endif //__flower__
