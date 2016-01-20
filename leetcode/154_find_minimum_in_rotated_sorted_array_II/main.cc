class Solution {
public:
    int findMin(vector<int>& nums) {
        int size=nums.size();
        int left=0;
        int right=size-1;
        while(left<right){
            int mid=(left+right)/2;
            if(nums[left]==nums[right]){
                --right;
            }
            else if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return nums[left];
    }
};