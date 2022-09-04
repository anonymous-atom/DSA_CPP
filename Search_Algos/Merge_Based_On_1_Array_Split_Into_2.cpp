//
// Created by karun on 4/9/22.
//

#include <iostream>

void Merge(int a[], int l, int h, int mid) {
    int i, j , k;

    i = l;
    j = mid + 1;
    k = l;
    int b[h+1];
    while(i < mid + 1 && j <= h) {
        if(a[i] < a[j])
            b[k++] = a[i++];

        else
            b[k++] = a[j++];
    }

    for(; i < mid +1;)
        b[k++] = a[i++];

    for(; j < h+1; )
        b[k++] = a[j++];

    for(int i = l; i < h + 1; i++)
        a[i] = b[i];
}


int main() {
    int a[] = {12,15,6,16};
    Merge(a, 0,3, 1);

    for(int i: a)
        std::cout<<i<<" ";
}