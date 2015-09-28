class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        while(nums[left]==nums[right] && left!=right ){
            --right;
        }
        int end=right;
        while(left<right){
            // (l & r) + ((l ^ r) >> 1) ??
            int mid=(left+right)/2;
            if(nums[left]==nums[right]){
                return target == nums[left];
            }
            if(nums[mid]<=nums[right]&&nums[left]>=nums[mid]){
                if(nums[mid]<target && target<=nums[right]){
                    left=mid+1;
                }
                else{
                    right=mid;
                }
            }
            else{
                if(nums[mid]>=target && target>=nums[left]){
                    right=mid;
                }
                else{
                    left=mid+1;
                }
            }
        }
        return left == right+1 ? false : nums[left]==target;
    }
};