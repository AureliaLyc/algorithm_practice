class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()||matrix[0].empty()) return 0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int area=0;
        vector<int> height(cols, 0);
        for(int i=0; i<rows; ++i){
            for(int j=0; j<cols; ++j){
                if(matrix[i][j]=='1'){
                    ++height[j];
                }
                else{
                    height[j]=0;
                }
            }
            stack<int> pos;
            for(int j=0; j<=cols;){
                int h=j==cols?0:height[j];
                if(pos.empty() || height[pos.top()]<h){
                    pos.push(j++);
                }
                else{
                    int t=pos.top();
                    pos.pop();
                    area=max(area, height[t]*(pos.empty()?j:j-pos.top()-1));
                }
            }
        }
        return area;
    }
};
