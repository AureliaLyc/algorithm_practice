class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return search(matrix, target, 0, matrix[0].size(), 0, matrix.size(););
    }
    bool search(vector<vector<int>>& matrix, int target, int left, int right, int up, int down){
        if(!(up<down && left<right)) return false;
        int hmid=(left+right)/2;
        int lmid=(up+down)/2;
        if(matrix[lmid][hmid]==target) return true;
        if(matrix[lmid][hmid]<target){ // not in 2nd
            return search(matrix, target, left, right, lmid+1, down) || search(matrix, target, hmid+1, right, up, lmid+1);
        }
        else{// not in 4th
            return search(matrix, target, left, right, up, lmid) || search(matrix, target, left, hmid, lmid, down);
        }
        return false;
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=rows==0?0:matrix[0].size();
        int i=rows-1;
        int j=0;
        while(i>=0 && j<columns){
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]>target) --i;
            else ++j;
        }
        return false;
    }
};