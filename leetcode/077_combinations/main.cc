class Solution {
public:
    void createCombinations(vector<vector<int> >& res, vector<int>& v, int n, int k, int start){
        if(k){
            while(start<=n-k+1){
                v.push_back(start++);
                createCombinations(res, v, n, k-1, start);
                v.pop_back();
            }
        }
        else{
            res.push_back(v);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int> > res;
        vector<int> v;
        v.reserve(k);
        createCombinations(res, v, n, k, 1);
        return res;
    }
};