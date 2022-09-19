#include <iostream>
using namespace std;
#include <cstdio>


void Tower_of_Hanoi(int n, char s, char t, char d, int* costx) {
    static int cost = 0;
    if (n > 0) {
        if(s == 'S' & d == 'D')
            cost += 2;
        if(s == 'D' & d == 'S')
            cost += 2;


        if(s == 'S' & d == 'T')
            cost += 1;
        if(s == 'T' & d == 'S')
            cost += 1;

        if(s == 'T' & d == 'D')
            cost += 1;
        if(s == 'D' & d == 'T')
            cost += 1;

        Tower_of_Hanoi(n-1, s,d ,t, costx);
        printf("Move Disk %d %c-->%c",n, s, d);
        printf("\n");
        Tower_of_Hanoi(n-1, t, s, d, costx);
    }
    *costx = cost;
}

int main() {
    int n;
    cin>>n;
    int cost = 0;
    Tower_of_Hanoi(n,'S', 'T', 'D', &cost);
    std::cout<<cost;

}