//
// Created by karun on 11/8/22.
//

#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int x  = arr[i];
        int j = i-1;
        while (j > -1 && x < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}
int main ()
{
    int arr[] = {5,7,8,3,2};
    InsertionSort(arr, 5);
    for(int i : arr) std::cout<<i<<std::endl;
    return 0;
}
