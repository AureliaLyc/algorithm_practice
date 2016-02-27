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
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size=matrix[0].size();
        int l=0, r=matrix.size();
        while(l<r){
            int m=(l+r)/2;
            if(matrix[m][size-1]<target)
                l=m+1;
            else
                r=m;
        }
        if(l==matrix.size()) return false;
        vector<int>& ans=matrix[l];
        l=0, r=size;
        while(l<r){
            int m=(l+r)/2;
            if(ans[m]<target)
                l=m+1;
            else
                r=m;
        }
        return ans[l]==target;
    }
};