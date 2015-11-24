class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size=nums.size();
        int left=0;
        int right=size-1;
        int mid;
        while(left<right){
            mid=(left & right) + ((left ^ right) >> 1);
            left=nums[mid]<nums[mid+1]?mid+1:left;
            right=nums[mid]<nums[mid+1]?right:mid;
        }
        return left;
    }
};