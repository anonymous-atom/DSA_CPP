//
// Created by karun on 31/8/22.
//
#include <map>
#include <unordered_map>
#include <string>
#include <iostream>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> rtoint;
        rtoint['I'] = 1;
        rtoint['V'] = 5;
        rtoint['X'] = 10;
        rtoint['L'] = 50;
        rtoint['C'] = 100;
        rtoint['D'] = 500;
        rtoint['M'] = 1000;

        int intgr = 0;
        int i = 0;
        while( i < s.size() ) {
            if(rtoint[s[i]] < rtoint[s[i+1]]) {
                intgr = intgr + (rtoint[s[i+1]] - rtoint[s[i]]);
                i = i + 2;
            }

            else {
                intgr = intgr + rtoint[s[i]];
                i++;
            }

        }

        return intgr;
    }
};

int main() {
    Solution s;
    std::string str = "MCMXCIV";
    std::cout << s.romanToInt(str) << std::endl;
    return 0;
}