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