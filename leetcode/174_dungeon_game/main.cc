class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int rows=dungeon.size();
        int columns=dungeon[0].size();
        vector<vector<int>> d(rows, vector<int>(columns, 0));
        d[rows-1][columns-1]=dungeon[rows-1][columns-1];
        for(int i=rows-2; i>=0; --i){
            d[i][columns-1]=d[i+1][columns-1]>0?dungeon[i][columns-1]:dungeon[i][columns-1]+d[i+1][columns-1];
        }
        for(int i=columns-2; i>=0; --i){
            d[rows-1][i]=d[rows-1][i+1]>0?dungeon[rows-1][i]:dungeon[rows-1][i]+d[rows-1][i+1];
        }
        for(int i=rows-2; i>=0; --i){
            for(int j=columns-2; j>=0; --j){
                int ans=max(d[i+1][j], d[i][j+1]);
                d[i][j]=ans>=0? dungeon[i][j] : dungeon[i][j]+ans;
            }
        }
        return d[0][0]>0?1:(1-d[0][0]);
    }
};