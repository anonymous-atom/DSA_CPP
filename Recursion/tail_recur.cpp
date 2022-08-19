//
// Created by karun on 19/8/22.
// Tail Recursion, Function Call At The End Of Program After All Statements have been executed
#include <iostream>
using std::cout;


void fun(int n) {
    if(n > 0) {
        std::cout<<n<<std::endl;
        fun(n-1);
    }
}
int main() {
    fun(4);
}