//
// Created by karun on 19/8/22.
//In indirect recursion there are more than 1 function, and they call one another


#include <iostream>
using std::cout;

void funA(int n);
void funB(int n);

void funA(int n) {
    if(n > 0) {
        std::cout<<n<<std::endl;
        funB(n-1);
    }
}

void funB(int n) {
    if(n> 1) {
        std::cout<<n<<std::endl;
        funA(n/2);
    }
}

int main() {
    funA(4);
}
/*
 4
 3
 1
  */