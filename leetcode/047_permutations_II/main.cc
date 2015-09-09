class Solution {
public:
    void buildPermutations(vector<vector<int> >& res, vector<int>& nums, int start, vector<int>& v, vector<int>& used){
        if(v.size() == nums.size()){
            res.push_back(v);
        }
        else{
            int prev;
            int j=0;
            for(int i=start; i<nums.size(); ++i){
                if(i==start){
                    while(used[j]) j++;
                }
                else{
                    while(j<nums.size() && (used[j] || nums[j]==prev)) j++;
                }
                if(j<nums.size()){
                    prev = nums[j];
                    v.push_back(prev);
                    used[j] = 1;
                    buildPermutations(res, nums, start+1, v, used);
                    used[j] = 0;
                    v.pop_back();
                }
            }
        }
    }
    vector<vector<int> > permuteUnique(vector<int>& nums) {
        vector<vector<int> > res;
        if(nums.size()<2){
            res.push_back(nums);
            return res;
        }
        sort(nums.begin(), nums.end());
        vector<int> v;
        v.reserve(nums.size());
        vector<int> used(nums.size(), 0);
        buildPermutations(res, nums, 0, v, used);
        return res;
    }
};