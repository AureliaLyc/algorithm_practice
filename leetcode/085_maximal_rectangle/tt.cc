#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    int maximalRectangle(vector<string>& matrix) {
        int r=matrix.size();
        if(r==0) return 0;
        int c=matrix[0].size();
        vector<vector<int>> heights(r, vector<int>(c, 0));
        build(matrix, heights);
        return mr(heights);
    }
    void build(vector<string>& matrix, vector<vector<int>>& heights){
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0; i<r; ++i){
            for(int j=0; j<c; ++j){
                heights[i][j]=matrix[i][j]=='0'?0:(i==0?1:heights[i-1][j]+1);
            }
        }
    }
    int mr(vector<vector<int>>& heights){
        int res=0;
        int r=heights.size();
        int c=heights[0].size();
        for(int i=0; i<r; ++i){
            res=max(res, mr(heights[i]));
        }
        return res;
    }
    int mr(vector<int>& heights){
        int size=heights.size();
        vector<int> stac;
        int res=0;
        for(int i=0; i<=size; ++i){
            int h=i==size?0:heights[i];
            while(!stac.empty()&&heights[stac.back()]<=h){
                int j=stac.back();
                stac.pop_back();
                res=max(res, heights[j]*(stac.empty()?i:(i-stac.back()-1)));
            }
            stac.push_back(i);
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution abc;
    vector<string> v={"1"};
    abc.maximalRectangle(v);
    return 0;
}