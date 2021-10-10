//------------------------------------------------------------------------------
// container_Constr.cpp - contains functions of proccessing container
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Container initialization
void Init(container& c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Clearing container from elements (clearing memory)
void Clear(container& c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Inputting container content from stream
void In(container& c, ifstream& ifst) {
    while (!ifst.eof()) {
        if (In(c.cont[c.len], ifst)) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Random input of container content
void InRnd(container& c, int size) {
    while (c.len < size) {
        if (InRnd(c.cont[c.len])) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Outputting container content from stream
void Out(container& c, ofstream& ofst) {
    ofst << "Container contains " << c.len << " elements." << endl;
    for (int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        Out(c.cont[i], ofst);
    }
}

//------------------------------------------------------------------------------
// Deleting some elements and container sort
void DeleteSort(container& c) {
    double sum_of_fractions = 0;
    for (int i = 0; i < c.len; i++) {
        sum_of_fractions += Fraction(c.cont[i]);
    }

    sum_of_fractions /= c.len;
    plant *new_cont = new plant[c.max_len];

    int plant_count = 0; // count of correct plants
    for (int i = 0; i < c.len; i++) {
        if (Fraction(c.cont[i]) >= sum_of_fractions) {
            new_cont[plant_count++] = c.cont[i];
        }
    }

    for (int i = 0; i < plant_count; i++) {
        c.cont[i] = new_cont[i];
    }
    c.len = plant_count;
}
