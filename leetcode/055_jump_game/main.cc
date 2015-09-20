class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        if(size<2){
            return true;
        }
        int start = nums.front();
        int i=1;
        for(; i<size && start>0; ++i){
            --start;
            int val=nums[i];
            start = max(start, val);
        }
        return i==size;
    }
};