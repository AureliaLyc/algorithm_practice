class Solution {
public:
    int calculate(int start, int end, vector<vector<int>>& cache){
        if(start>end){
            return 1;
        }
        if(cache[start-1][end-1]==0){
            for(int i=start; i<=end; ++i){
                int left=calculate(start, i-1, cache);
                int right=calculate(i+1, end, cache);
                cache[start-1][end-1] += left*right;
            }
        }
        return cache[start-1][end-1];
    }
    int numTrees(int n) {
        vector<vector<int>> cache(n, vector<int>(n,0));
        return calculate(1, n, cache);
    }
};