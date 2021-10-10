#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - contains data type
// featuring simplest container
//------------------------------------------------------------------------------

#include "plant.h"

//------------------------------------------------------------------------------
// Simple container based on one-dimensional array
struct container {
    enum { max_len = 10000 }; // max length
    int len; // current length
    plant cont[max_len];
};

// Container initialization
void Init(container& c);

// Clearing container from elements (clearing memory)
void Clear(container& c);

// Inputting container content from stream
void In(container& c, ifstream& ifst);

// Random input of container content
void InRnd(container& c, int size);

// Outputting container content from stream
void Out(container& c, ofstream& ofst);

// Deleting some elements and container sort
void DeleteSort(container& c);

#endif
