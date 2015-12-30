class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> v (n, string(n, '.'));
        vector<vector<int>>f (3, vector<int>(n+n-1, 0));
        build(0, n, f, v, res);
        return res;
    }
    void build(int row, int n, vector<vector<int>>&f, vector<string>& v, vector<vector<string>>& res){
        if(row==n){
            res.push_back(v);
        }
        else{
            for(int i=0; i<n; ++i){
                if(!f[0][i] && !f[1][n-row-1+i] && !f[2][row+i]){
                    v[row][i]='Q';
                    f[0][i]=f[1][n-row-1+i]=f[2][row+i]=1;
                    build(row+1, n, f, v, res);
                    f[0][i]=f[1][n-row-1+i]=f[2][row+i]=0;
                    v[row][i]='.';
                }
            }
        }
    }
};