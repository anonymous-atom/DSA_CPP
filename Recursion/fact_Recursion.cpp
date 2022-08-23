//
// Created by karun on 19/8/22.
//Recursive function to find factorial

#include <cstdio>
#include <ctime>
#include <iostream>

int factR(int n) {
    if(n == 0)
        return 1;
    else
        return n * factR(n-1);
}

int main() {
    int st= (double)clock();
    int fact_Out = factR(4);
    printf("%d", fact_Out);
    std::cout<<"\n";
    std::cout<<st;
}
