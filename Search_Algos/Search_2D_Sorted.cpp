//
// Created by karun on 20/9/22.
//
class Solution {
public:
    bool searchMatrix(vector<vector<int>>matrix, const int target) {
        int i = 0;
        int h = matrix[0].size() - 1;

        if(matrix.size() <= 1)
            if(matrix[0][0] == target) return true;

        if(target > matrix[matrix.size() - 1][matrix[0].size() -1])
            return false;

        while(i < matrix.size() && target >= matrix[i][h]) {

            if( target == matrix[i][h]) return true;
            else i++;

        };
        if ( count(matrix[i].begin(), matrix[i].end(), target) ) return true;
        else return false;
    }
};