class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, unordered_set<string> &wordList) {
        wordList.insert(endWord);
        wordList.erase(beginWord);
        vector<string> v{ beginWord };
        vector<vector<string>> res{v};
        bool ok=false;
        while(!ok){
            vector<vector<string>> temp;
            unordered_set<string> us;
            for(int i=0; i<res.size(); ++i){
                string s=res[i].back();
                bool fnd=false;
                for(int j=0; j<s.length(); ++j){
                    char k=s[j];
                    for(char m='a'; m<='z'; ++m){
                        if(m!=k){
                            s[j]=m;
                            if(wordList.find(s) != wordList.end()){
                                us.insert(s);
                                temp.push_back(res[i]);
                                temp.back().push_back(s);
                                ok = (s==endWord) || ok;
                            }
                        }
                    }
                    s[j]=k;
                }
            }

            if(us.empty()){
                ok=true;
            }
            else{
                for(auto s:us){
                    wordList.erase(s);
                }
            }
            if(ok){
                res.clear();
                for(int j=0; j<temp.size(); ++j){
                    if(temp[j].back()==endWord){
                        res.push_back(temp[j]);
                    }
                }
            }
            else
                swap(temp, res);
        }
        return res;
    }
};