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
    while(i <= mid && j <= h) {

        if (a[i] < a[j])  b[k++] = a[i++];

        else b[k++] = a[j++];
    }

    for(; i <= mid;) b[k++] = a[i++];

    for(; j <= h; ) b[k++] = a[j++];

    for(int i = l; i <= h; i++) a[i] = b[i];
}

void MergeSort(int a[], int n) {
    int P, i,l,h, mid;

    for(P = 2; P <= n; P*=2) {

        for(i = 0; i+P-1 < n; i+=P){
            l = i;
            h = i + P - 1;
            mid  = (l + h) / 2;
            Merge(a, l, h, mid);
        }

    }
    if(P/2 < n)
        Merge(a, 0, n-1, P/2);
}
int main() {
    int a[] = {12,6,16, 18, 19, 21};

    MergeSort(a, 6 );

    for(int i: a)
        std::cout<<i<<" ";
}