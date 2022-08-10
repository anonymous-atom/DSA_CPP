//
// Created by karun on 10/8/22.
//


#include <iostream>
using namespace std;

int main ()
{
    int num;
    cin >> num;
    //Create array
    int Arr[num];

    //Input
    for (int i = 0; i < num; i++)
        cin >> Arr[i];


    int pass = 0;
    while(pass < num) {
        for(int i = 0; i < num -1 - pass; i++) {
            if(Arr[i] > Arr[i+1]) {
                int tmp = Arr[i];
                Arr[i] = Arr[i+1];
                Arr[i+1] = tmp;
            }
        }
        pass++;
    }

    for(int i = 0; i < num; i++)
        std::cout<<Arr[i]<<" ";

    return 0;
}