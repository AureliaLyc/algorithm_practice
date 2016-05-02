class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> r(9, vector<int>(9, 0));
        vector<vector<int>> c(9, vector<int>(9, 0));
        vector<vector<int>> s(9, vector<int>(9, 0));
        for(int i=0; i<9; ++i){
            for(int j=0; j<9; ++j){
                if(board[i][j]!='.'){
                    int x=board[i][j]-'1';
                    int y=i/3*3+j/3;
                    if(r[j][x]!=0) return false;
                    if(c[i][x]!=0) return false;
                    if(s[y][x]!=0) return false;
                    r[j][x]=c[i][x]=s[y][x]=1;
                }
            }
        }
        return true;
    }
};