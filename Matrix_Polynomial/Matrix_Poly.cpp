//
// Created by karun on 9/8/22.
//

#include <iostream>
#include <valarray>

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

int Evaluate_Poly(const Poly &pol, int x) {
    static int sum = 0;
    for(int i = 0; i < pol.n; i++) {
        sum += pol.m[i].coeff * std::pow(x, pol.m[i].exp);
    }
    return sum;
}

//Function To Add 2 Polynomials
Poly* Add_Poly(const Poly &pol1, const Poly &pol2) {
    Poly *pol_out = new Poly;
    int i, j, k = 0;
    while (i < pol1.n && j < pol2.n) {

        if(pol1.m[i].exp > pol2.m[j].exp)
            pol_out->m[k++] = pol1.m[i++];

        else if(pol1.m[i].exp < pol2.m[j].exp)
            pol_out->m[k++] = pol2.m[j++];

        else {
            pol_out->m[k].exp = pol1.m[i].exp;
            pol_out->m[k].coeff = pol1.m[i].coeff + pol1.m[i].coeff;
        }
    }
    return pol_out;
}



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