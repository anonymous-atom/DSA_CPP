//
// Created by karun on 19/8/22.
//Sum of n natural number by recursion

#include <cstdio>

int sumR(int n) {
    //Base case to break free from recursiono
    if(n == 0)
        return 0;
    else
        return n + sumR(n-1);
}

int main() {
    int sumOut = sumR(4);
    printf("%d", sumOut);
}
