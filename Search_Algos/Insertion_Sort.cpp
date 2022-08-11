//
// Created by karun on 11/8/22.
//

#include <iostream>
using namespace std;

int main ()
{

    int Arr[] = { 2, 7, 8, 12, 4 };
    int n = 5;

    for (int i = 1; i <= n-1; i++)
    {

        int val = Arr[i];
        int ptr = i;
        while (ptr > 0 && val < Arr[ptr - 1])
        {
            Arr[ptr] = Arr[ptr-1];
            ptr--;
        }
        Arr[ptr] = val;
    }

    for(int i: Arr)
        cout<<i<<" ";


    return 0;
}
