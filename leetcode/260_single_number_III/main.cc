class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=0;
        for(int i=0; i<nums.size(); ++i){
            n = n^nums[i];
        }
        n &= -n;
        vector<int> res={0,0};
        for(int i=0; i<nums.size(); ++i){
            res[!!(nums[i]&n)]^=nums[i];
        }
        return res;
    }
};