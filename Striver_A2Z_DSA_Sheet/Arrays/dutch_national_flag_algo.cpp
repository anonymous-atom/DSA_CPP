//
// Created by karun on 16/7/23.
//
#include <bits/stdc++.h>

class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;

        while(mid <= high){
            if (nums[mid] == 0) std::swap(nums[mid++], nums[low++]);
            else if (nums[mid] == 1) mid++;
            else std::swap(nums[mid], nums[high--]);
        }

    }
};
