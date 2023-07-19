//
// Created by karun on 19/7/23.
//

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), idx = -1;

        for(int i = n-2; i >= 0; i--) {
            if(nums[i] < nums[i+1]) {
                idx = i;
                break;
            }
        }

        //Check if last one
        if(idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        int i = n-1;
        while(nums[i] <= nums[idx]) i--;

        swap(nums[i], nums[idx]);
        sort(nums.begin()+idx+1, nums.end());

        return;
    }
};
