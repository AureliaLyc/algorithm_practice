#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int, int>> res;
        priority_queue<pair<int, int>> block;
        int size=buildings.size();
        int i=0;
        while(i<size || !block.empty()){
            int curX=block.empty()?buildings[i][0]:block.top().second;
            if(i>=size || buildings[i][0]>=curX){
                while(!block.empty() && block.top().second<=curX){
                    block.pop();
                }
            }
            else{
                curX=buildings[i][0];
                while(i<size && buildings[i][0]==curX){
                    block.push(make_pair(buildings[i][2], buildings[i][1]));
                    ++i;
                }
            }
            int curH=block.empty()?0:block.top().first;
            if(res.empty() || (res.back().second!=curH)){
                res.push_back(make_pair(curX, curH));
            }
        }
        return res;
    }
};
int main(int argc, char const *argv[])
{
    Solution abc;
    vector<vector<int>> v={{0,1,3}};
    abc.getSkyline(v);
    return 0;
}