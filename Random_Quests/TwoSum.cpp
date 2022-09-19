//
// Created by karun on 30/8/22.
//
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<int,  int> map;
    vector<int> twoSum(vector<int> nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(nums[i]) != map.end())
                return vector<int>{map[nums[i]], i};
            map[target - nums[i]] = i;
        }
        return vector<int>{};
    }
};