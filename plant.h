#ifndef __plant__
#define __plant__

//------------------------------------------------------------------------------
// plant.h - contains general plant description
//------------------------------------------------------------------------------

#include "tree.h"
#include "bush.h"
#include "flower.h"

//------------------------------------------------------------------------------
// structure, generalizing all available plants
struct plant {
    // key values for each plant
    enum key { TREE, BUSH, FLOWER };
    key k; // key
    // uses alternatives
    union { // using simplest realisation
        tree t;
        bush b;
        flower f;
    };
};

// General plant parameters input from file
bool In(plant& p, ifstream& ifdt);

// Random general plant input
bool InRnd(plant& p);

// General tree parameters output into a stream
void Out(plant& p, ofstream& ofst);

// Computing division number of vowels with general name length
double Fraction(plant& p);

#endif
