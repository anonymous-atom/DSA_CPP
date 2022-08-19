//
// Created by karun on 19/8/22.
// Note: Linear recursion only calls a function 1 time, every linear recursion can't be a tail or head recursion.
//Note: If a recursive function is calling itself more than 1 time then it is tree recursion.

//Sample Example of tree recursion, has nothing to do with real life

#include <iostream>
using std::cout;
using std::endl;

void fun(int n) {
    if(n > 0) {
        std::cout<<n<<std::endl;
        fun(n-1);
        fun(n-1);
    }
}

int main() {
    fun(3);
}

//Output:
/*
 3
 2
 1
 1
 2
 1
 1
  */
