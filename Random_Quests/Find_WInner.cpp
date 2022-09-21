//
// Created by karun on 21/9/22.
//
//AlgoExpert Easy Question: Tournament Winner

#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {

    unordered_map<string, int> mp;

    for(int i = 0 ; i < results.size(); i++ ) {
        mp[ competitions[i][1 - results[i]] ]++;
    }

    string mx;
    int cnt = 0;
    for(auto pair: mp) {

        if(pair.second > cnt) {
            cnt = pair.second;
            mx = pair.first;
        }
    }
    return mx;

}