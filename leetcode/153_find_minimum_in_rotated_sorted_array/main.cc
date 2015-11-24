class Solution {
public:
    int findMin(vector<int>& nums) {
        int size=nums.size();
        if(size==0) return 0;
        int left=0;
        int right=size-1;
        while(left!=right){
            int mid=(left+right)/2;
            if(nums[mid]>=nums[left]&&nums[mid]>nums[right]){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return nums[left];
    }
};