//
// Created by karun on 17/7/23.
//
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algo
        int cnt = 0;
        int ele;
        for(int i = 0; i < nums.size(); i++){
            if (cnt == 0){
                cnt = 1;
                ele = nums[i];
            }
            else if (ele == nums[i]) cnt++;
            else cnt--;
        }
        return ele;
    }
};