#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void solveSudoku(vector<string>& board) {
        vector<vector<int>> r(9, vector<int>(9, 0));
        vector<vector<int>> c(9, vector<int>(9, 0));
        vector<vector<int>> b(9, vector<int>(9, 0));
        for(int i=0; i<9; ++i){
            for (int j = 0; j < 9; ++j)
            {
                if (board[i][j]!='.')
                {
                    int x=i/3*3+j/3;
                    int y=board[i][j]-'1';
                    r[i][y]=c[j][y]=b[x][y]=1;
                }
            }
        }
        build(board, r, c, b, 0);
    }
    bool build(vector<string> & board, vector<vector<int>>& r, vector<vector<int>>& c, vector<vector<int>>& b, int z){
        while(z<81 && board[z/9][z%9]!='.') ++z;
        if (z==81)return true;
        int i=z/9;
        int j=z%9;
        if(board[i][j]=='.'){
            int x=i/3*3+j/3;
            for(int m=0; m<9; ++m){
                if(r[i][m]==0 && c[j][m]==0 && b[x][m]==0){
                    board[i][j]='1'+m;
                    r[i][m]=c[j][m]=b[x][m]=1;
                    if(build(board, r, c, b, z+1)){
                        return true;
                    }
                    r[i][m]=c[j][m]=b[x][m]=0;
                }
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[])
{
    vector<string> v={"..9748...","7........",".2.1.9...","..7...24.",".64.1.59.",".98...3..","...8.3.2.","........6","...2759.."};
    Solution abc;
    abc.solveSudoku(v);
    return 0;
}