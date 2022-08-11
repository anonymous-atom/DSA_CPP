//
// Created by karun on 10/8/22.
//Bubble Sort


#include <iostream>
using namespace std;

int main ()
{
    int num = 5;
    //Create array
    int Arr[] = {2,9,8,5,3};

    //Input
    for (int i = 0; i < num; i++)
        cin >> Arr[i];


    int pass = 0;
    while (pass < num) {
        for(int i = 0; i < num; i++){
            if(Arr[i] > Arr[i+1]) {
                int tmp = Arr[i+1];
                Arr[i+1] = Arr[i];
                Arr[i] = tmp;
            }
        }
        pass++;
    }

    for(int i = 0; i < num; i++)
        std::cout<<Arr[i]<<" ";

    return 0;
}