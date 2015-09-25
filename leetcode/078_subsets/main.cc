class Solution {
public:
    void createSubsets(vector<vector<int> >& res, vector<int>& v, vector<int>& nums, int start){
        res.push_back(v);

        for(int i=start; i<nums.size(); ++i){
            v.push_back(nums[i]);
            createSubsets(res, v, nums, i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > res;
        vector<int> v;
        sort(nums.begin(), nums.end());
        int size=nums.size();
        v.reserve(size);
        createSubsets(res, v, nums, 0);
        return res;
    }
};

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> subs(1, vector<int>());
        for (int i = 0; i < nums.size(); i++) {
            int n = subs.size();
            for (int j = 0; j < n; j++) {
                subs.push_back(subs[j]);
                subs.back().push_back(nums[i]);
            }
        }
        return subs;
    }
};