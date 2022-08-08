//
// Created by karun on 8/8/22.
//

#include <iostream>
using std::cout;


void set(int Arr[], int r, int c, int x, int n);

int main() {
    int Arr[10];
    int r = 4; int c = 3; int n = 4;

    set(Arr, r, c, 82, n);
    std::cout<<Arr[4];
}

void set(int Arr[], int r, int c, int x, int n) {
    if(r <= c) {
        Arr[c-r] = x;
    }
    else {
        Arr[n+r-c-1] = x;
    }
}