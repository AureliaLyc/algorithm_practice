class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > res(n, vector<int>(n,1));
        if(n<2){
            return res;
        }
        int left=0, up=0, right=n, down=n;
        int cnt=1;
        int size=n*n;
        while(cnt<=size){
            for(int j=left;j<right;++j){
                res[up][j] = cnt++;
            }
            for(int i=up+1;i<down; ++i){
                res[i][right-1] = cnt++;
            }
            for(int j=right-2;j>=left; --j){
                res[down-1][j] = cnt++;
            }
            for(int i=down-2;i>up; --i){
                res[i][left] = cnt++;
            }
            ++left;--right;++up;--down;
        }
        return res;
    }
};