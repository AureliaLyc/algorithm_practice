class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        int left=2, right=2;
        while(right<size){
            if(nums[left-2]!=nums[right])
            {
                nums[left++]=nums[right];
            }
            ++right;
        }
        return left<size?left:size;
    }
};
