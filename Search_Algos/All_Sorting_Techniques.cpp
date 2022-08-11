//
// Created by karun on 11/8/22.
//
#include <iostream>
using namespace std;

int main ()
{

    int Arr[] = { 2, 7, 8, 12, 4 };
    int n = 5;

    //Insertion Sort Starts ----------->
    for(int i = 1; i < n; i++) {
        int val = Arr[i];
        int ptr = i;
        while(ptr >= 0 && val < Arr[ptr-1]) {
            Arr[ptr] = Arr[ptr-1];
            ptr--;
        }
        Arr[ptr] = val;
    }

    //<---------------Insertion Sort Ends



    //Bubble Sort Starts------------->
    int pass = 0;

    while(pass < n) {
        for(int i = 0; i < n; i++) {
            if(Arr[i] > Arr[i+1]) {
                int tmp = Arr[i+1];
                Arr[i+1] = Arr[i];
                Arr[i] = tmp;
            }
        }
        pass++;
    }
//<---------------Bubble Sort Ends

    for(int i: Arr)
        cout<<i<<" ";


    return 0;
}
