class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char>mysMap(1024, -1);
        vector<char>mytMap(1024, -1);
        for (int i = 0; i < s.length(); ++i)
        {
            char sc = s[i];
            char tc = t[i];
            if (mysMap[sc] == -1)
            {
                mysMap[sc] = i;
            }
            if (mytMap[tc] == -1)
            {
                mytMap[tc] = i;
            }
            if (mysMap[sc] != mytMap[tc])
            {
                return false;
            }
        }
        return true;
    }
};