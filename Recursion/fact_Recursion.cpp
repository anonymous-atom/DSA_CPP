//
// Created by karun on 19/8/22.
//Recursive function to find factorial

#include <cstdio>

int factR(int n) {
    if(n == 0)
        return 1;
    else
        return n * factR(n-1);
}

int main() {
    int fact_Out = factR(4);
    printf("%d", fact_Out);
}
