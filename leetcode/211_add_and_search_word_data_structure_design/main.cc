class TrieNode{
public:
    TrieNode()
      : valid(false){
          memset(next, 0, sizeof(next));
    }
    TrieNode* get(char i){
        if(next[i]==nullptr) next[i]=new TrieNode;
        return next[i];
    }
    TrieNode* fetch(char i){
        return next[i];
    }
    bool isValid() const {
        return valid;
    }
    void setValid(){
        valid=true;
    }
private:
    TrieNode* next[26];
    bool valid;
};

class WordDictionary {
public:
    WordDictionary(){
    }
    // Adds a word into the data structure.
    void addWord(string word) {
        TrieNode* tn=&root;
        for(char c : word){
            tn=tn->get(c-'a');
        }
        tn->setValid();
    }

    // Returns if the word is in the data structure. A word could
    // contain the dot character '.' to represent any one letter.
    bool search(string word) {
        TrieNode* tn=&root;
        return find(word, tn, 0);
    }
    bool find(string& word, TrieNode* tn, int i){
        if(i==word.length()) return tn->isValid();
        char c=word[i];
        if(c!='.'){
            c-='a';
            if(tn->fetch(c) && find(word, tn->fetch(c), i+1)) return true;
        }
        else{
            for(int j=0; j<26; ++j){
                if(tn->fetch(j) && find(word, tn->fetch(j), i+1)){
                    return true;
                }
            }
        }
        return false;
    }
private:
    TrieNode root;
};

// Your WordDictionary object will be instantiated and called as such:
// WordDictionary wordDictionary;
// wordDictionary.addWord("word");
// wordDictionary.search("pattern");