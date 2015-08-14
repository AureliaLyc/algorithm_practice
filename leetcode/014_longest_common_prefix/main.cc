class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        if( strs.empty() ){
            return s;
        }
        if( strs.size() == 1 ){
            return strs[0];
        }

        string& s0 = strs.front();
        for( int i=0; i<s0.length(); ++i){
            char m = s0[i];
            for( int j=1; j<strs.size(); ++j ){
                string& t = strs[j];
                if( i == t.length() || m != t[i] ){
                    return s;
                }
            }
            s.push_back(m);
        }
        return s;
    }
};