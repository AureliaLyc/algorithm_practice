#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int maximalRectangle(vector<string>& matrix) {
        int r=matrix.size();
        if(r==0) return 0;
        int c=matrix[0].size();
        if(c==0) return 0;
        int res=0;
        vector<vector<int>> h(r, vector<int>(c, 0));
        vector<vector<int>> v(r, vector<int>(c, 0));
        vector<vector<int>> a(r, vector<int>(c, 0));
        for(int i=0; i<r; ++i){
            for(int j=0; j<c; ++j){
                if(matrix[i][j]=='0'){
                    h[i][j]=0;
                    v[i][j]=0;
                }
                else{
                    h[i][j]=i>0?h[i-1][j]+1:1;
                    v[i][j]=j>0?v[i][j-1]+1:1;
                }
            }
        }
        int m=0, n=0;
        for(int i=0; i<r; ++i){
            for(int j=0; j<c; ++j){
                a[i][j]=h[i][j]+v[i][j];
                if(a[i][j]>res){
                    res=a[i][j];
                    m=i, n=j;
                }
            }
        }
        res=0;
        int w=INT_MAX;
        for(int i=m; i>=m-h[m][n]+1; --i){
            if(w>v[i][n]){
                w=v[i][n];
            }
            res=max(res, w*(m-i+1));
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    std::vector<string> v={"11111111","11111110","11111110","11111000","01111000"};
    Solution abc;
    abc.maximalRectangle(v);
    return 0;
}