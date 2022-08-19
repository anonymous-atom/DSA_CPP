//
// Created by karun on 19/8/22.
//A recursive function will pass parameter as a recursive call

#include <iostream>
int fun(int n) {
    if(n > 100)
        return n -10;
    else
        return fun(fun(n+11));
}

int main() {
    int nm = fun(95);
    std::cout<<nm;
}

//Output is 91