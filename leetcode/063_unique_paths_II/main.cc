class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]) return 0;
        obstacleGrid[m-1][n-1]=1;
        for(int j=m-2; j!=-1; --j){
            obstacleGrid[j][n-1] = obstacleGrid[j][n-1] == 1 ? 0 : obstacleGrid[j+1][n-1];
        }
        for(int i=n-2; i!=-1; --i){
            obstacleGrid[m-1][i] = obstacleGrid[m-1][i]==1 ? 0 : obstacleGrid[m-1][i+1];
        }
        for(int i=m-2; i!=-1; --i){
            for(int j=n-2; j!=-1; --j){
                obstacleGrid[i][j] = obstacleGrid[i][j] == 1 ? 0 : obstacleGrid[i+1][j] + obstacleGrid[i][j+1];
            }
        }
        return obstacleGrid[0][0];
    }
};