//
// Created by karun on 24/8/22.
//

#include <iostream>

void BubbleSort(int arr[], int n) {
    int flag;
    for(int i = 0; i < n-1; i++) {
        flag = 0;
        for (int j = 0; j < n-1-i; ++j) {
            if(arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = 1;
            }
            if(flag == 0) break;
        }
    }

}

int main() {
    int arr[] = {8,5,7,3,2};
    BubbleSort(arr, 5);
    for(int i: arr)
        std::cout<<i<<"\n";
}