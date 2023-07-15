//
// Created by karun on 15/7/23.
//

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int xor_out = 0;
        for(int i = 0; i < nums.size(); i++) xor_out = xor_out ^ nums[i];

        return xor_out;
    }
};