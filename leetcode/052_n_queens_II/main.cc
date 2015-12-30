#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<int>> f (3, vector<int>(n+n-1, 0));
        int res=0;
        search(0, n, res, f);
        return res;
    }
    void search(int row, int n, int& res, vector<vector<int>>& f){
        if(row==n){
            ++res;
        }
        else{
            for(int i=0; i<n; ++i){
                if(!f[0][i] && !f[1][row+i] && !f[2][row-i+n]){
                    f[0][i]=f[1][row+i]=f[2][row-i+n]=1;
                    search(row+1, n, res, f);
                    f[0][i]=f[1][row+i]=f[2][row-i+n]=0;
                }
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution abc;
    cout<<abc.totalNQueens(4)<<endl;
    cout<<abc.totalNQueens(5)<<endl;
    cout<<abc.totalNQueens(6)<<endl;
    cout<<abc.totalNQueens(7)<<endl;
    cout<<abc.totalNQueens(8)<<endl;
    return 0;
}