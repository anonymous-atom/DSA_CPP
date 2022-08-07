//
// Created by karun on 7/8/22.
//For Lower Triangular Matrix [Row Major]
#include <iostream>
using std::cout;

void set(int Arr[], int r, int c, int x);

int main() {
    //Took Size Manually
    int Arr[10];
    int r; int c;
    std::cin>>r>>c;
    int indi = (r*(r-1))/2 + (c-1);
    set(Arr, r, c, 12);
    std::cout<<Arr[indi];
}
void set(int Arr[], int r, int c, int x) {
    if(r >= c) {
        int indi = (r*(r-1))/2 + (c-1);
        Arr[indi] = x;
    }
}