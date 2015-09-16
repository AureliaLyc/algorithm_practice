class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums.front();
        int resMax = res;
        int size=nums.size();
        for(int i=1; i<size; ++i){
            res = res < 0 ? nums[i] : res+nums[i];
            resMax = max(res, resMax);
        }
        return resMax;
    }
};