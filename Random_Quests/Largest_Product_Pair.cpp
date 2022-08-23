//
// Created by karun on 23/8/22.
//
#include <iostream>
#include <vector>
#include <algorithm>

int MaxPairwiseProduct(const std::vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    int indx1 = -1;
    for (int first = 0; first < n; ++first) {
        if(indx1 == -1 || (numbers[first] > numbers[indx1] ) ) {
            indx1 = first;
        }
    }


    int indx2 = -1;
    for(int second = 0; second < n; ++second) {
        if(second != indx1 && (indx2 == -1 || (numbers[second] > numbers[indx2] ))) {
            indx2 = second;
        }
    }

    max_product = numbers[indx1] * numbers[indx2];
    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}