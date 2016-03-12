class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        int size=s.length();
        vector<bool> flags(size+1, false);
        flags[0]=true;
        for(int i=1; i<=size; ++i){
            // the following is very important.
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
        return flags.back();
    }
};

class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        int size=s.length();
        vector<int> d(size+1, 0);
        d[0]=1;
        for(int i=0; i<size; ++i){
            if(d[i]){
                string t;
                for(int j=i; j<size; ++j){
                    t.push_back(s[j]);
                    if(wordDict.find(t)!=wordDict.end()){
                        d[j+1]=1;
                    }
                }
            }
        }
        return d.back();
    }
};