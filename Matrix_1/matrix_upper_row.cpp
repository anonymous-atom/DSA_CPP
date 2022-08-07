//
// Created by karun on 7/8/22.
//Upper Triangular Using Row Major
//logic
//r <= c
#include <iostream>
using std::cout;

void set(int Arr[], int dim, int r, int c, int x);

int main() {
    int Arr[10];

    int dim = 4; int r = 3; int c = 4;
    int indx = dim*(r-1) - ((dim-2)*(dim - 1)/2) + c - r;
    set(Arr, dim, r, c, 44);
    std::cout<<Arr[indx];
}

void set(int Arr[], int dim, int r, int c, int x) {
    if(r <= c) {
        int indx = dim*(r-1) - ((dim-2)*(dim - 1)/2) + c - r;
        Arr[indx] = x;
    }
}