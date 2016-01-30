class TrieNode {
public:
    TrieNode(){
        fill_n(_nodes, 26, nullptr);
        _isWord=false;
    }
    void insert(string& s){
        if(!s.empty()){
            int i=s.back()-'a';
            s.pop_back();
            if(_nodes[i]==nullptr){
                _nodes[i]=new TrieNode;
            }
            _nodes[i]->insert(s);
        }
        else{
            _isWord=true;
        }
    }
    TrieNode* find(char c){
        return _nodes[c-'a'];
    }
    bool isWord() const{
        return _isWord;
    }
private:
    TrieNode* _nodes[26];
    bool _isWord;
};

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> ret;
        int rows=board.size();
        if(rows==0)return ret;
        int columns=board[0].size();
        if(columns==0) return ret;
        TrieNode* root=buildTrie(words, rows*columns);
        string s;
        unordered_set<string> res;
        for(int i=0; i<rows; ++i){
            for(int j=0; j<columns; ++j){
                build(board, res, root, s, i, j);
            }
        }
        for(auto i:res){
            ret.push_back(i);
        }
        return ret;
    }
    void build(vector<vector<char>>& board, unordered_set<string>& res, TrieNode* root, string& s, int i, int j){
        if(i>=0&&i<board.size() && j>=0&&j<board[0].size() && board[i][j]!='-'){
            char& ans=board[i][j];
            TrieNode* fnd=root->find(ans);
            if(fnd){
                s.push_back(ans);
                if(fnd->isWord()){
                    string t=s;
                    reverse(t.begin(), t.end());
                    res.insert(t);
                }
                ans='-';
                build(board, res, fnd, s, i+1, j);
                build(board, res, fnd, s, i-1, j);
                build(board, res, fnd, s, i, j+1);
                build(board, res, fnd, s, i, j-1);
                ans=s.back();
                s.pop_back();
            }
        }
    }
    TrieNode* buildTrie(vector<string>& words, int maxDepth){
        TrieNode* root=new TrieNode;
        for(auto s: words){
            if(s.length()<=maxDepth)
                root->insert(s);
        }
        return root;
    }
};