class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int size=nums.size();
        int left=1, right=2;
        while(right<size){
            if(nums[left]!=nums[right] || nums[left-1]!=nums[right])
            {
                ++left;
                nums[left]=nums[right];
            }
            ++right;
        }
        return left<size?left+1:size;
    }
};