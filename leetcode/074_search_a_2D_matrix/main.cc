class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int left=0, right=m;
        while(left<right){
            int mid = (left+right)/2;
            if(matrix[mid][0]<=target){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        if(left==0){
            return false;
        }
        m=matrix[0].size();
        int n=left-1;
        left=0, right=m;
        while(left<right){
            int mid=(left+right)/2;
            if(matrix[n][mid]<=target){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        return matrix[n][left-1] == target;
    }
};