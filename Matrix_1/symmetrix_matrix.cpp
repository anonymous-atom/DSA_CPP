//
// Created by karun on 8/8/22.
//For this we will be using our approach of Lower Triangular Matrix
#include <iostream>
using std::cout;

//We will just be writing value for Array[i][j] because it's symmetric
//So we will use value of Array[i][j] when we try to read Array[j][i]
void set(int Arr[], int r, int c, int x);

int main() {
    int Arr[10];
    int r = 4; int c = 3; int x = 66;


}

void set(int Arr[], int r, int c, int x) {
    if(r >= c) {
        int indx = (r*(r-1)/2) + c -1;
        Arr[indx] = x;
    }
}