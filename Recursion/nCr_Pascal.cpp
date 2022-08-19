//
// Created by karun on 19/8/22.
//nCr using pascal triangle

#include <iostream>

int nCr(int n, int r) {
    if(n == r || r ==0 )
        return 1;
    else
        return nCr(n-1, r-1) + nCr(n-1, r);
}

int main() {
    int outP = nCr(4,2);
    std::cout<<outP;
}
