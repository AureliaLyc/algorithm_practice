class Solution {
public:
    bool existNext(vector<vector<char>>& board, int i, int j, const string& word, int cur){
        if(cur == word.length()){
            return true;
        }
        if(i<board.size() && i>=0 && j<board[0].size() && j>=0 && word[cur]==board[i][j]){
            board[i][j]='\0';
            bool fnd =
                  (existNext(board, i+1, j, word, cur+1)
                || existNext(board, i, j+1, word, cur+1)
                || existNext(board, i, j-1, word, cur+1)
                || existNext(board, i-1, j, word, cur+1));
            board[i][j]=word[cur];
            if(fnd)
                return true;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(), n=board[0].size();
        int size = word.length();
        if( size<(m+1)*(n+1)){
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                bool fnd = existNext(board, i, j, word, 0);
                if(fnd){
                    return true;
                }
            }
        }}
        return false;
    }
};