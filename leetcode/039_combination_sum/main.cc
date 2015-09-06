class Solution {
public:
    void getSum(vector<int>& candidates, int target, int left, vector<int>& v){
        if(candidates[left]<=target){
            v.push_back(candidates[left]);
            target -= candidates[left];
            if(target == 0){
                combSet.push_back(v);
            }
            else if (target >= candidates[left]){
                int start = left;
                int right = candidates.size();
                // try every
                while(start<right && candidates[start]<=target){
                    getSum(candidates, target, start, v);
                    ++start;
                }
            }
            v.pop_back();
        }
    }
    vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
        int size = candidates.size();
        int left = 0;
        sort(candidates.begin(), candidates.end());
        while(left<size && candidates[left]<=target){
            if(left != 0){
                while(left<size && candidates[left] == candidates[left-1]) ++left;
            }
            vector<int> v;
            getSum(candidates, target, left, v);
            ++left;
        }
        return combSet;
    }
    vector<vector<int> > combSet;
};