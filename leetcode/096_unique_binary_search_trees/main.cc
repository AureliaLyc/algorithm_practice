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

class Solution {
public:
    int numTrees(int n) {
        if(n==0) return 0;
        vector<int> d(n+1, 0);
        d[0]=1;
        d[1]=1;
        for(int i=2; i<=n; ++i){
            for(int j=0; j<i; ++j){
                d[i]+=d[j]*d[i-j-1];
            }
        }
        return d.back();
    }
};