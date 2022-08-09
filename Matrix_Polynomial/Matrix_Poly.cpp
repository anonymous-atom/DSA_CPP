//
// Created by karun on 9/8/22.
//

#include <iostream>
using std::cout;
using std::cin;

struct Term {
    int coeff;
    int exp;
};

struct Poly {
    int n; //Number of terms in polynomial
    struct Ter *m;
};