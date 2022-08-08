//
// Created by karun on 8/8/22.
//Tri Diagonal Matrix
#include <iostream>
using std::cout;
void set(int Arr[], int r, int c, int n, int x);

int main() {
    int Arr[10];
    int r = 4; int c = 3; int n = 10;
    int indx = r - 2;
    set(Arr, r, c, 10, 82);
    std::cout<<Arr[indx];
}

void set(int Arr[], int r, int c, int n, int x) {
    if(r - c == 1){
        int indx = r -2;
        Arr[indx] = x;
    }
    else if (r - c == 0) {
        int indx = n - 1 + r -1;
        Arr[indx] = x;
    }
    else {
        int indx = 2*n -1 + r - 1;
        Arr[indx] = x;
    }
}