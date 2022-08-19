//
//Created by karun on 19/8/22.
//Fibonacci series


#include <iostream>

int fibbo(int n) {

    if (n <= 1)
        return n;
    else
        return fibbo(n-2)+fibbo(n-1);

}


int main() {
    float Taylor = fibbo(4);
    std::cout<<Taylor;
}