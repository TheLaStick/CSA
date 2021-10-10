#ifndef __tree__
#define __tree__

//------------------------------------------------------------------------------
// tree.h - contains tree description and its interface
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"

// tree
struct tree {
    char* name; // tree name
    int length; // name length
};

// Tree parameters input from file
void In(tree& t, ifstream& ifst);

// Random tree parameters input
void InRnd(tree& t);

// Tree parameters output in formative stream
void Out(tree& t, ofstream& ofst);

// Computing tree fraction
double Fraction(tree& t);

#endif //__tree__
