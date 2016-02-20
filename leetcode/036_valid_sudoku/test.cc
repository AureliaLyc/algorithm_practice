#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<string>& board) {
        vector<vector<int>> r(9, vector<int>(9, 0));
        vector<vector<int>> c(9, vector<int>(9, 0));
        vector<vector<int>> b(9, vector<int>(9, 0));
        for(int i=0; i<9; ++i){
            int x=i/3;
            int y=i%3;
            for(int j=0; j<9; ++j){
                int m=x*3+j/3;
                int n=y*3+j%3;
                if(board[i][j]!='.' && (r[i][board[i][j]-'1']||c[i][board[j][i]-'1']||b[i][board[m][n]-'1'])){
                    cout<< "r: " << r[i][board[i][j]-'1'] << "c: " << c[i][board[j][i]-'1'] << "b: " << b[i][board[m][n]-'1'] << endl;
                    cout<< i << " " << j << endl;
                    return false;
                }
                r[i][board[i][j]-'1']=1;
                c[i][board[j][i]-'1']=1;
                b[i][board[m][n]-'1']=1;
            }
        }
        return true;
    }
    bool isValidSudoku2(vector<string>& board) {
        vector<vector<int>> r(9, vector<int>(9, 0));
        vector<vector<int>> c(9, vector<int>(9, 0));
        vector<vector<int>> b(9, vector<int>(9, 0));
        for(int i=0; i<9; ++i){
            int x=i/3;
            int y=i%3;
            for(int j=0; j<9; ++j){
                int m=x*3+j/3;
                int n=y*3+j%3;
                if(board[i][j]!='.' && r[i][board[i][j]-'1']){
                    return false;
                }
                if(board[j][i]!='.' && c[i][board[j][i]-'1']){
                    return false;
                }
                if(board[m][n]!='.' && b[i][board[m][n]-'1']){
                    return false;
                }
                r[i][board[i][j]-'1']=1;
                c[i][board[j][i]-'1']=1;
                b[i][board[m][n]-'1']=1;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    vector<string> board={".87654321","2........","3........","4........","5........","6........","7........","8........","9........"};
    Solution abc;
    abc.isValidSudoku(board);
    return 0;
}