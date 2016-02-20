class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size=nums.size();
        for(int i=0; i<size;){
            if(nums[i]>0 && nums[i]<=size && nums[i]!=nums[nums[i]-1]){
                swap(nums[i], nums[nums[i]-1]);
            }
            else{
                ++i;
            }
        }
        int i=0;
        for(; i++<size && nums[i-1]==i;);
        return i;
    }
};