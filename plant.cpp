//------------------------------------------------------------------------------
// shape.cpp - contains procedures related to work with general plant
// and creating random plant
//------------------------------------------------------------------------------

#include "plant.h"

//------------------------------------------------------------------------------
// General plant parameters input from file
bool In(plant& p, ifstream& ifst) {
    int k;
    ifst >> k;
    switch (k) {
        case 1:
            p.k = plant::TREE;
            In(p.t, ifst);
            return true;
        case 2:
            p.k = plant::BUSH;
            In(p.b, ifst);
            return true;
        case 3:
            p.k = plant::FLOWER;
            In(p.f, ifst);
            return true;
        default:
            return false;
    }
}

// Random general plant input
bool InRnd(plant& p) {
    auto k = rand() % 2 + 1;
    switch (k) {
        case 1:
            p.k = plant::TREE;
            InRnd(p.t);
            return true;
        case 2:
            p.k = plant::BUSH;
            InRnd(p.b);
            return true;
        case 3:
            p.k = plant::FLOWER;
            InRnd(p.b);
            return true;
        default:
            return false;
    }
}

//------------------------------------------------------------------------------
// General tree parameters output into a stream
void Out(plant& p, ofstream& ofst) {
    switch (p.k) {
        case plant::TREE:
            Out(p.t, ofst);
            break;
        case plant::BUSH:
            Out(p.b, ofst);
            break;
        case plant::FLOWER:
            Out(p.f, ofst);
            break;
        default:
            ofst << "Incorrect plant!" << endl;
    }
}

//------------------------------------------------------------------------------
// Computing division number of vowels with general name length
double Fraction(plant& p) {
    switch (p.k) {
        case plant::TREE:
            return Fraction(p.t);
            break;
        case plant::BUSH:
            return Fraction(p.b);
            break;
        case plant::FLOWER:
            return Fraction(p.f);
            break;
        default:
            return 0.0;
    }
}
