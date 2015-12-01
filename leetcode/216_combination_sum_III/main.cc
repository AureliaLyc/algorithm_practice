class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> v;
        collect(res, v, k, n);
        return res;
    }
    void collect(vector<vector<int>>& res, vector<int>& v, int k, int n){
        if(k==0){
            if(n==0) res.push_back(v);
            return;
        }
        int i=v.empty()?0:v.back();
        int limit=min(9, n/k);
        for(++i; i<=limit; ++i){
            v.push_back(i);
            collect(res, v, k-1, n-i);
            v.pop_back();
        }
    }
};