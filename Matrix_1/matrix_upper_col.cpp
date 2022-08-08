//
// Created by karun on 7/8/22.
//Upper triangular using column major

#include <iostream>
using std::cout;

void set(int Arr[], int r, int c, int x);

int main() {
    int Arr[10];
    int dim = 4; int r = 3; int c = 4;
    int indx = (c * ((c-1)/2)) + r-1;
    set(Arr, r,c, 48);
    std::cout<<Arr[indx];
}

void set(int Arr[], int r, int c, int x) {
    if(r <= c) {
        int indx = (c * ((c-1)/2)) + r-1;
        Arr[indx] = x;
    }
}