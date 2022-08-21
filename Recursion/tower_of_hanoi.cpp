//
// Created by karun on 21/8/22.
//Tower of Hanoi

#include <iostream>

void Tower_of_Hanoi(int n, char a, char b, char c) {
    if (n > 0) {
        Tower_of_Hanoi(n-1, a,c ,b );
        printf("Move disk from %c to %c", a, c);
        printf("\n");
        Tower_of_Hanoi(n-1, b, a, c);
    }
}

int main() {
    Tower_of_Hanoi(3,'a', 'b', 'c');
}