class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows=matrix.size();
        if(rows==0) return 0;
        int columns=matrix[0].size();
        if(columns==0) return 0;
        vector<int>f (columns, 0);
        int res=0;
        for(int j=0; j<columns; ++j){
            f[j]=matrix[0][j]=='1'?1:0;
            res=max(f[j], res);
        }
        int upleft;
        for(int i=1; i<rows; ++i){
            upleft=f[0];
            f[0]=matrix[i][0]-'0';
            res=max(f[0], res);
            for(int j=1; j<columns; ++j){
                int t=f[j];
                if(matrix[i][j]=='1'){
                    f[j]=min(upleft, min(t, f[j-1]))+1;
                    res=max(f[j], res);
                }
                else{
                    f[j]=0;
                }
                upleft=t;
            }
        }
        return res*res;
    }
};