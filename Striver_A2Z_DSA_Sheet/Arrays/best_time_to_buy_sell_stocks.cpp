//
// Created by karun on 17/7/23.
//
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_i = prices[0];
        int maxP = 0;
        for(int i = 1; i < prices.size(); i++){
            min_i = min(min_i, prices[i]);
            maxP = max(maxP, prices[i] - min_i);
        }

        return maxP;
    }
};