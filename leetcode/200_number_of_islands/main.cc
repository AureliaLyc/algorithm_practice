class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        int rows=grid.size();
        if(rows){
            int columns=grid[0].size();
            for(int i=0; i<rows; ++i){
                for(int j=0; j<columns; ++j){
                    if(grid[i][j]=='1'){
                        ++res;
                        queue<pair<int,int>> p;
                        grid[i][j]=2;
                        p.push(make_pair(i,j));
                        while(!p.empty()){
                            auto pos=p.front();
                            p.pop();
                            int x=pos.first, y=pos.second;
                            if(x>0 && grid[x-1][y]=='1'){
                                p.push(make_pair(x-1, y));
                                grid[x-1][y]=2;
                            }
                            if(x<rows-1 && grid[x+1][y]=='1'){
                                p.push( make_pair(x+1, y));
                                grid[x+1][y]=2;
                            }
                            if(y>0 && grid[x][y-1]=='1'){
                                p.push(make_pair(x, y-1));
                                grid[x][y-1]=2;
                            }
                            if(y<columns-1 && grid[x][y+1]=='1'){
                                p.push(make_pair(x, y+1));
                                grid[x][y+1]=2;
                            }
                        }
                    }
                }
            }
        }
        return res;
    }
};