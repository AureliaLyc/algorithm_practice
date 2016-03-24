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
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0||matrix[0].size()==0) return 0;
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int> d(c, 0);
        int maxArea=0;
        for(int i=0; i<r; ++i){
            int pre=d[0];
            for(int j=0; j<c; ++j){
                int t=matrix[i][j]=='1'?min(pre, min(j==0?0:d[j-1], d[j]))+1:0;
                pre=d[j];
                d[j]=t;
                maxArea=max(maxArea, t);
            }
        }
        return maxArea*maxArea;
    }
};