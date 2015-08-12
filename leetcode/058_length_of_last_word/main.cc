class Solution {
public:
    int lengthOfLastWord(string s) {
        size_t found = s.find_last_not_of(" ");
        if (found != string::npos)
        {
            s.erase(found+1);
        }
        else{
            s.clear();
        }
        if (!s.empty())
        {
            size_t found = s.find_last_of(" ");
            if (found != string::npos)
            {
                return (s.length() - found - 1);
            }
            else{
                return s.length();
            }
        }
        return 0;
    }
};