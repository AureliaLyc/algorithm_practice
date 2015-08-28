class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        size_t size = digits.length();
        if(size<1){
            return res;
        }
        char* chars[] = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        size_t i = 0;
        char c = digits[i];
        const char* can = chars[c-'0'];
        size_t len = strlen(can);
        res.resize(len);
        for(size_t j=0; j<len; ++j){
            res[j].push_back(can[j]);
        }
        for(++i; i<size; ++i){
            char c = digits[i];
            can = chars[c-'0'];
            len = strlen(can);
            int ssize = res.size();
            if(len>1){
                vector<string> temp = res;
                size_t t = len;
                while( t > 1){
                    res.insert(res.end(), temp.begin(), temp.end());
                    --t;
                }
            }
            for(int i=0; i<len; ++i){
                char c = can[i];
                for(int j=i*ssize; j<(i+1)*ssize; ++j){
                    res[j].push_back(c);
                }
            }
        }
        return res;
    }
};