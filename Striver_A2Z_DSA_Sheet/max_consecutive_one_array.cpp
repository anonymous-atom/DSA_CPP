//
// Created by karun on 14/7/23.
//

#include "bits/stdc++.h"

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int max_c = 0;

        int count = 0;
        for(int i = 0; i < nums.size(); i++){

            if (nums[i] == 1) {
                count++;
                max_c = max(max_c, count);
            }

            else count = 0;
        }

        return max_c;
    }
};