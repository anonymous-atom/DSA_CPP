//
// Created by karun on 4/9/22.
//
#include <vector>
#include <iostream>

void Merge(const int a[], const int b[], int c[]) {

    int a_size = 4;
    int b_size = 4;
    int c_size = a_size + b_size;

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < a_size && j < b_size && k < c_size) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        }
        else {
            c[k++] = b[j++];
        }
    }
    for(; i < a_size;)
        c[k++] = a[i++];

    for(; j < b_size; )
        c[k++] = b[j++];
}

int main() {
    int a[] = {2,5,6,16};
    int b[] = {7,14,15,18};
    int m = 4;
    int n = 4;
    int c[m + n];
    Merge(a, b, c);

    for(int i: c)
        std::cout<<i<<" ";
}