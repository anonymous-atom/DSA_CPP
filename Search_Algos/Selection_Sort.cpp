//
// Created by karun on 25/8/22.
//

#include <iostream>

void Selection_Sort(int arr[], int n) {
    int i;
    int j;
    int k;

    for(int i = 0; i < n-1; ++i) {
        for(j = i, k = i; j < n; ++j){
            if(arr[j] < arr[k]) k =j;
        }
        std::swap(arr[i], arr[k]);
    }
}

int main() {
    int arr[] = {8,6,3,2,5,4};
    Selection_Sort(arr, 6);
    for(int i = 0; i < 6; i++) std::cout<<arr[i]<<std::endl;

}