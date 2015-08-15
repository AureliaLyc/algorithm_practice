class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>flags(256, -1);
        int maxNow = 0;
        size_t size = s.length();
        int start = -1;
        for(int i=0; i<size; ++i){
            char m = s[i];
            if(flags[m]>start){
                start = flags[m];
            }
            maxNow = max(i-start, maxNow);
            flags[m] = i;
        }
        return maxNow;
    }
};