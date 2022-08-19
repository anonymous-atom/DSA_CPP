//
// Created by karun on 19/8/22.
//Taylor series using recursion


#include <iostream>

float powr(float m, float n) {
    if(n == 0)
        return 1;
    else
        return m * powr(m, n-1);
}
float factR(float n) {
    if(n == 0)
        return 1;
    else
        return n * factR(n-1);
}

float TaylorR(float x, float n) {
    if(n == 0)
        return 1;
    else
        return static_cast<float>(powr(x, n))/static_cast<float>(factR(n)) + TaylorR(x, n-1);
}


int main() {
    float Taylor = TaylorR(4, 40);
    std::cout<<Taylor;
}