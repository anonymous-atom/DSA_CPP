//
// Created by karun on 14/7/23.
//

#include "bits/stdc++.h"
class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();

        int sum = (n*(n+1))/2;

        int arrSum = 0;
        for(int i: nums)
            arrSum += i;

        return (sum - arrSum);
    }
};
