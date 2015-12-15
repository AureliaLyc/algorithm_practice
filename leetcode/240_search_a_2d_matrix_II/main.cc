class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        if(rows==0) return false;
        int columns=matrix[0].size();
        if(columns==0) return false;
        return search(matrix, target, 0, 0, rows, columns);
    }

    bool search(vector<vector<int>>& matrix, int target, int up, int left, int down, int right){
        if(up==down || left==right) return false;
        int hmid=(left+right)/2;
        int lmid=(up+down)/2;
        if(matrix[lmid][hmid]==target) return true;
        int l,u,r,d;
        if(matrix[lmid][hmid]<target){
            l=hmid+1;
            u=lmid+1;
            if(l<right||u<down){
                return search(matrix, target, up, hmid, lmid, right) || search(matrix, target, lmid, hmid, down, right) ||
                search(matrix, target, lmid, left, down, hmid);
            }
        }
        else{
            r=hmid;
            d=lmid;
            if(left<r||up<d){
                return search(matrix, target, up, left, lmid, hmid) || search(matrix, target, up, hmid, lmid, right) ||
                search(matrix, target, lmid, left, down, hmid);
            }
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