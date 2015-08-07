class Solution {
public:
    bool isAnagram(string s, string t) {
        #define BUFSIZE 128
        vector<int> sFlags(BUFSIZE, 0);
        vector<int> tFlags(BUFSIZE, 0);

        int size = s.length();
        if(size != t.length() ){
            return false;
        }
        for( int i = 0; i < size; ++i ){
            sFlags[s[i]]++;
            tFlags[t[i]]++;
        }
        for(int i = 0; i < BUFSIZE; ++i){
            if( sFlags[i] != tFlags[i] ){
                return false;
            }
        }
        return true;
    }
};