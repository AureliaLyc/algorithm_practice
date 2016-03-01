class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> v;
        build(res, v, 1, n, k);
        return res;
    }
    void build(vector<vector<int>>& res, vector<int>& v, int start, int n, int k){
        if(v.size()==k){
            res.push_back(v);
        }
        else{
            for(int i=start; i<=n; ++i){
                v.push_back(i);
                build(res, v, i+1, n, k);
                v.pop_back();
            }
        }
    }
};