class Solution {
public:
    vector<string> wordBreak(string s, unordered_set<string>& wordDict) {
        int size=s.length();
        vector<bool> flags(size+1, false);
        flags[0]=true;
        for(int i=1; i<=size; ++i){
            for(int j=i-1; j>=0; --j){
                if(flags[j]){
                    string ss=s.substr(j, i-j);
                    if(wordDict.find(ss)!=wordDict.end()){
                        flags[i]=true;
                        break;
                    }
                }
            }
        }
        vector<string> res;
        if(!flags.back()) return res;
        int len=s.length();
        string t;
        build(s, 0, wordDict, res, t);
        return res;
    }
    void build(string& s, int i, unordered_set<string>& wordDict, vector<string>& res, string& t){
        if(i==s.length()){
            res.push_back(t);
        }
        else{
            for(int j=i+1; j<=s.length(); ++j){
                string u=s.substr(i, j-i);
                if(wordDict.find(u)!=wordDict.end()){
                    string r=(t.empty()?u: t+" " + u);
                    build(s, j, wordDict, res, r);
                }
            }
        }
    }
};