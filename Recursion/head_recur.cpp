//
// Created by karun on 19/8/22.
//Head Recursion, Function Call Before End Of Programme.
#include <iostream>
using std::cout;


void fun(int n) {
    if(n > 0) {
        fun(n-1);
        std::cout<<n<<std::endl;
    }
}
int main() {
    fun(4);
}