#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;


bool is_Prefect(int N);

int main()
{
    int N;
    cin>>N;
    if(is_Prefect(N))
        std::cout<<"Yes";
}

bool is_Prefect(int N) {
    bool is_Prf = false;
    vector <int> divisors;

    for(int x = 1; x <= N/2; x++){

        if(N%x == 0) {
            divisors.push_back(x);
        }

    }

    int sum = 0;
    for(int dv : divisors) {
        sum += dv;
    }

    if (sum == N)
        is_Prf = true;

    return is_Prf;

}