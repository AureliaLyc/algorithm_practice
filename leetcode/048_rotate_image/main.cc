class Solution {
public:
    void trans(vector<vector<int>>& matrix){
        int size = matrix.size();
        for(int i=0; i<size; ++i){
            for(int j=i; j<size; ++j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    void swapRows(vector<vector<int>>& matrix){
        int size = matrix.size();
        int half = size/2;
        for(int i=0; i<size; ++i){
            for(int j=0; j<half; ++j){
                swap(matrix[i][j], matrix[i][size-j-1]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        trans(matrix);
        swapRows(matrix);
    }
};