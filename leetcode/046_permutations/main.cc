class Solution {
public:
    void buildPermutations(vector<vector<int> >& res, vector<int>& nums, int start){
        for(int i=start; i<nums.size(); ++i){
            if(i!=start){
                swap(nums[start], nums[i]);
                res.push_back(nums);
                buildPermutations(res, nums, start+1);
                swap(nums[start], nums[i]);
            }
            else{
                buildPermutations(res, nums, start+1);
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        int size = nums.size();
        int resSize = 1;
        for(int i=1; i<=size; ++i){
            resSize = resSize*i;
        }
        vector<vector<int> > res;
        res.reserve(resSize);
        res.push_back(nums);
        buildPermutations(res, nums, 0);
        return res;
    }
};