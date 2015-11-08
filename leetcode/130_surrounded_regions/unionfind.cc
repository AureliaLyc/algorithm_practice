class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int rows=board.size();
        if(rows<3) return;
        int columns=board.front().size();
        if(columns<3) return;
        pre.resize(rows*columns);
        for(int i=1; i<rows; ++i){
            for(int j=1; j<columns; ++j){
                int me = i*columns+j;
                pre[me]=me;
                if(board[i][j]=='X') continue;
                if(board[i-1][j]=='O'){
                    int t=(i-1)*columns+j;
                    int r=find(t);
                    int x=r/columns;
                    if(x==0 || x==rows-1){
                        pre[me]=r;
                    }
                    else{
                        int y=r%columns;
                        if(y==0 || y==columns-1){
                            pre[me]=r;
                        }
                        else{
                            pre[r]=me;
                        }
                    }
                }
                if(board[i][j-1]=='O'){
                    int t=i*columns+j-1;
                    int r=find(t);
                    int x=r/columns;
                    if(x==0 || x==rows-1){
                        pre[me]=r;
                    }
                    else{
                        int y=r%columns;
                        if(y==0 || y==columns-1){
                            pre[me]=r;
                        }
                        else{
                            pre[r]=me;
                        }
                    }
                }
            }
        }
        for(int i=1; i<rows; ++i){
            for(int j=1; j<columns; ++j){
                int r=find(i*columns+j);
                int x=r/columns;
                int y=r%columns;
                if(!(x==0 || x==rows-1 || y==0 || y==columns-1)){
                    board[i][j]='X';
                }
            }
        }
    }
    int find(int t){
        int r = t;
        while(pre[r]!=r){
            r=pre[r];
        }
        while(t != r){
            int q = pre[t];
            pre[t]=r;
            t = q;
        }
        return r;
    }
private:
    vector<int> pre;
};