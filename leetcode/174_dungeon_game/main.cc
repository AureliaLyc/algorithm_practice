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

class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r=dungeon.size();
        int c=dungeon[0].size();
        vector<int> d(c, INT_MAX);
        d[c-1]=1;
        for(int i=r-1; i>=0; --i){
            for(int j=c-1; j>=0; --j){
                int t=j==(c-1)?d[j]:min(d[j], d[j+1]);
                d[j]=max(1, t-dungeon[i][j]);
            }
        }
        return d.front();
    }
};

class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r=dungeon.size();
        int c=dungeon[0].size();
        vector<vector<int>> d(r+1, vector<int>(c+1, INT_MIN));
        d[r][c-1]=1;
        build(dungeon, d, 0, 0);
        return d[0][0];
    }
    int build(vector<vector<int>>& dungeon, vector<vector<int>>& d, int i, int j){
        int& ans=d[i][j];
        if(ans!=INT_MIN){
            return ans;
        }
        else{
            if(i==d.size()-1) {
                ans=INT_MAX;
            }
            else if(j==d[0].size()-1) {
                ans=INT_MAX;
            }
            else{
            int f=build(dungeon, d, i+1, j); // forward point.
            int b=build(dungeon, d, i, j+1); // downward point.
            ans=max(1, min(f, b)-dungeon[i][j]); // should always be positive.
        }
        return ans;
    }
}