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
    struct Term *m;
};

int main() {
    struct Poly *p;
    std::cin>>p->n;
    p->m = new Term[p->n];
    std::cout<<"Enter Terms";

    for(int i = 0; i < p->n; i++ ){
        std::cin>>p->m[i].coeff;
        std::cin>>p->m[i].exp;
    }
}