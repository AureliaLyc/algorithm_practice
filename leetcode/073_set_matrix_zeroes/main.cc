class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool setFirstRow = false;
        bool setFirstColumn = false;
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(matrix[i][j]==0){
                    if(i==0) setFirstRow = true;
                    if(j==0) setFirstColumn = true;
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int j=1; j<n; ++j){
            for(int i=1; i<m; ++i){
                if( (matrix[0][j]==0 || matrix[i][0]==0) && matrix[i][j] ){
                    matrix[i][j]=0;
                }
            }
        }
        if(setFirstColumn){
            for(int i=0; i<m; ++i){
                if(matrix[i][0]) matrix[i][0]=0;
            }
        }
        if(setFirstRow){
            for(int j=0; j<n; ++j){
                if(matrix[0][j]) matrix[0][j]=0;
            }
        }
    }
};