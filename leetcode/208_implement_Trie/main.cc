class TrieNode {
public:
    // Initialize your data structure here.
    TrieNode()
        :val(-1) {
            memset(next, 0, sizeof(next));
    }
    TrieNode* get(char i){
        if(next[i]==nullptr) next[i]= new TrieNode();
        return next[i];
    }
    TrieNode* next[26];
    int val;
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
        cnt=0;
    }

    // Inserts a word into the trie.
    void insert(string word) {
        int size=word.length();
        TrieNode* tn=root;
        for(int i=0; i<size; ++i){
            tn=tn->get(word[i]-'a');
        }
        if(size){
            tn->val=cnt++;
        }
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        int size=word.length();
        TrieNode* tn=root;
        for(int i=0; i<size && tn; ++i){
            tn=tn->next[word[i]-'a'];
        }
        return tn && tn->val!=-1;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        int size=prefix.length();
        TrieNode* tn=root;
        for(int i=0; i<size && tn; ++i){
            tn=tn->next[prefix[i]-'a'];
        }
        return tn;
    }

private:
    TrieNode* root;
    int cnt;
};

// Your Trie object will be instantiated and called as such:
// Trie trie;
// trie.insert("somestring");
// trie.search("key");