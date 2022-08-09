//
// Created by Karun on 8/8/22.
//Sparse matrix are matrices having more zero elements than non-zero elements
#include <iostream>
using std::cout;
using std::cin;

struct Element {
    int r;
    int c;
    int x;
};

struct Sparse {
    int m;
    int n;
    int num;
    struct Element *e;
};

void set(struct Sparse *e) {
    std::cout<<"Enter Dimensions: ";
    std::cin>> e->m;
    std::cin>> e->n;
    std::cout<<"Enter Number Of Non Zero Elements: ";
    std::cin>>e->num;
    e->e = new Element[e->num];
    for(int i = 0; i < e->num; i++){
        std::cin>>e->e[i].r;
        std::cin>>e->e[i].c;
        std::cin>>e->e[i].x;
    }
}

int main() {
    struct Sparse e;
    Sparse *pt = &e;
    set(pt);
    std::cout<<e.e[0].x; //Printing An Element To Check Out
}