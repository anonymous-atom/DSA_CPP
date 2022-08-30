//
// Created by karun on 30/8/22.
//
#include <string>
#include <iostream>

using namespace std;
class Solution {
public:

    bool isSubsequence(string seq, string strg) {
        bool trt = false;
        int i = 0;
        int j = 0;
        while( i < strg.size() ) {
            if(seq[j] == strg[i]) {
                i++; j++; }

            else {
                i++; }

        }
        if(j == seq.size())
            trt = true;
        return trt;
    }

};