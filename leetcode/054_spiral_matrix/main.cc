class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        if(m==0){
            return res;
        }
        int n = matrix.front().size();
        int total = m*n;
        res.reserve(total);
        int left=0, right=n, up=0, down=m;
        int cnt=0;
        while(cnt<total){
            for(int i=left; i<right && cnt<total; ++i){
                res.push_back(matrix[up][i]);
                ++cnt;
            }
            for(int i=up+1; i<down-1 && cnt<total; ++i){
                res.push_back(matrix[i][right-1]);
                ++cnt;
            }
            for(int i=right-1; i>left && cnt<total; --i){
                res.push_back(matrix[down-1][i]);
                ++cnt;
            }
            for(int i=down-1; i>up && cnt<total; --i){
                res.push_back(matrix[i][left]);
                ++cnt;
            }
            ++left;
            ++up;
            --right;
            --down;
        }
        return res;
    }
};