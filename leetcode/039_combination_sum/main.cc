class Solution {
public:
    void getSum(vector<int>& candidates, int target, int left, vector<int>& v){
        if(target == 0){
            combSet.push_back(v);
        }
        else {
            for(; left<candidates.size() && target >= candidates[left]; ++left){
                v.push_back(candidates[left]);
                getSum(candidates, target-candidates[left], left, v);
                v.pop_back();
            }
        }
    }
    vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> v;
        getSum(candidates, target, 0, v);
        return combSet;
    }
    vector<vector<int> > combSet;
};