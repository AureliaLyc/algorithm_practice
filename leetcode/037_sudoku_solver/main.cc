class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0);
    }
    bool solve(vector<vector<char>>& board, int start){
        int i=start;
        for(; i<81; ++i){
            int row=i/9;
            int column=i%9;
            if(board[row][column]=='.'){
                for(char val='1'; val<='9'; ++val){
                    if(isSafe(board, row, column, val)){
                        board[row][column]=val;
                        bool res=solve(board, i+1);
                        if(res) return res;
                    }
                }
                board[row][column]='.';
                return false;
            }
        }
        return true;
    }
    bool isSafe(vector<vector<char>>& board, int row, int column, char val){
        for(int i=0; i<9; ++i){
            if(board[i][column]==val) return false;
            if(board[row][i]==val) return false;
        }
        row-=row%3;
        column-=column%3;
        for(int i=0; i<3; ++i){
            for(int j=0; j<3; ++j){
                if(board[row+i][column+j]==val) return false;
            }
        }
        return true;
    }
};