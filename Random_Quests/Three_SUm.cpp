//
// Created by karun on 29/10/22.
//
class Solution {
public:
    Solution() {
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        cin.tie(nullptr);
    }
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());

        int min_i = INT_MAX;
        int out;
        int sz = nums.size();

        for(int i = 0; i < sz; i++) {

            int j = i + 1;
            int k = sz - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if ( abs(sum - target) < min_i) {
                    min_i = abs(sum - target);
                    out = sum;
                }
                if (sum < target) {
                    j++;
                }
                else k--;
            }
        }
        return out;
    }
};