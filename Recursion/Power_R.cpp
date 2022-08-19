//
// Created by karun on 19/8/22.
//Power using recursion, I will be calculation m raised to power n in this programme

#include <iostream>
using std::cout;
int powr(int m, int n) {
    if(n == 0)
        return 1;
    else
        return m * powr(m, n-1);
}

int main() {
    int powrOut = powr(4, 2);
    std::cout<<powrOut;
}