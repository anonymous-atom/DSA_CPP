//
// Created by karun on 29/10/22.
//
#include <iostream>
using namespace std;

int isPair(int arr[], int n, int x) {

    int i = 0;

    int h = n - 1;

    while (i < h) {

        if (arr[i] + arr[h] == x)
            return 1;
        else if (arr[i] + arr[h] < x) {
            i++;
        }
        else h--;
    }
    return 0;



}

int main()
{
    int A[6] = {10, 20, 35, 50, 75, 80};
    int n = 6;

    cout << isPair(A, n, 70);
    return 0;
}