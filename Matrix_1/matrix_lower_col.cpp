//
// Created by karun on 7/8/22.
//Lower Matrix Using Column Major
#include <iostream>
using std::cout;

void set2(int Arr[], int dim, int r, int c, int x);

int main() {
    int Arr[10];
    int dim = 4;
    int r = 4; int c = 3;
    set2(Arr, dim, r,c, 12);
    int indi = (dim*(c-1) - ((c-2)*(c-1))/2) + r-c;
    std::cout<<Arr[indi];
}

void set2(int Arr[], int dim, int r, int c, int x) {
    if(r >= c) {
        int indx = (dim*(c-1) - ((c-2)*(c-1))/2) + r-c;
        Arr[indx] = x;
    }
}

