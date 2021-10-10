//------------------------------------------------------------------------------
// bush.cpp - contains parameters input proccess
// for already made bush
//------------------------------------------------------------------------------

#include "bush.h"

//------------------------------------------------------------------------------
// Bush parameters input from file
void In(bush& b, ifstream& ifst) {
    b.name = new char[10];
    ifst >> b.name;
    b.length = strlen(b.name);
    int month_number;
    ifst >> month_number;
    switch (month_number) {
        case b.SEPTEMBER:
            b.month = bush::SEPTEMBER;
            break;
        case b.SPOOKTOBER:
            b.month = bush::SPOOKTOBER;
            break;
        case b.NONUTNOVEMBER:
            b.month = bush::NONUTNOVEMBER;
            break;
        default:
            b.month = bush::INCORRECT_MONTH;
    }
}

// Random bush parameters input
void InRnd(bush& b) {
    b.name = Random();
}

//------------------------------------------------------------------------------
// Bush parameters output in formative stream
void Out(bush& b, ofstream& ofst) {
    ofst << "It is Bush: name = " << b.name <<
         ". Month = " << b.month <<
         ". Fraction = " << Fraction(b) << "\n";
}

//------------------------------------------------------------------------------
// Computing bush fraction
double Fraction(bush& b) {
    int vowels_count = 0;
    for (int i = 0; i < b.length; i++) {
        if (b.name[i] == 'a' || b.name[i] == 'e' || b.name[i] == 'i'
            || b.name[i] == 'o' || b.name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / b.length;
}
