class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& v){
        if(target == 0){
            combSet.push_back(v);
        }
        else{
            for(int i=start; i<candidates.size() && candidates[i] <= target; ++i){
                if(i != start){
                    while(i<candidates.size() && candidates[i] == candidates[i-1]) ++i;
                }
                if(i<candidates.size()){
                    v.push_back(candidates[i]);
                    backtrack(candidates, target-candidates[i], i+1, v);
                    v.pop_back();
                }
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> v;
        backtrack(candidates, target, 0, v);
        return combSet;
    }
    vector<vector<int> > combSet;
};