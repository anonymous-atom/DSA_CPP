//
// Created by karun on 13/9/22.
//Kadane's Algorithm To Find Maximum Subarray Sum
#include <iostream>
int Kadane(const int arr[], int n) {
    int sum = 0;
    int max = arr[0];

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        if(sum > max)
            max = sum;

        if (sum < 0) sum = 0;
    }

    return max;
}

int main() {
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int out = Kadane(arr, 8);
    std::cout<<out;
}