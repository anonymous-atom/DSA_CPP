//
// Created by karun on 7/8/22.
//

//For Diagonal Matrix
#include <iostream>
#include <valarray>

using std::cout;

void set(int Arr[], int r, int c, int x);
void get(int pInt[]);

int main() {
    int size {0};
    std::cout<<"Enter size of Array: ";
    std::cin>>size;
    int Arr[size];
    //std::cout<< sizeof(Arr)/ sizeof(int );
    for(int i = 1; i <= size; i++){
        int num;
        std::cout<<"Enter Element "<<i<<": ";
        std::cin>>num;
        set(Arr, i, i,num);
    }
    for(int i:Arr)
        std::cout<<i<<" ";
}

void set(int Arr[], int r, int c, int x) {
    if(r == c)
        Arr[r - 1] = x;
}