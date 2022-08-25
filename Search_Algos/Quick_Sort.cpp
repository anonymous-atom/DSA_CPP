#include <stdio.h>
#include <algorithm>
#include <climits>
#include<iostream>

int Partition(int arr[], int l, int h) {
    int p = arr[l];
    int i = l, j = h;


    do {
        do { i++; }
        while (arr[i] <= p);

        do { j--; }
        while (arr[j] > p);

        if (i < j)
            std::swap(arr[i], arr[j]);
    } while (i<j);

    std::swap(arr[l],arr[j]);
    return j;
}

void Quick_Sort(int A[], int l, int h) {
    int j;
    if(l < h) {
        j = Partition(A, l, h);
        Quick_Sort(A, l, j);
        Quick_Sort(A, j+1, h);
    }
}

int main()
{
    int A[] = {11,13,7,12,16,9,24,5,10,3, INT32_MAX}, n = 11, i;
    Quick_Sort(A, 0, 10);
    for(int i: A){
        std::cout<<i<<std::endl;
    }
    return 0;
}
