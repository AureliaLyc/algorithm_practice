class Solution {
public:
    string shortestPalindrome(string s) {
        string r=s;
        reverse(r.begin(), r.end());
        string p=s+"#"+r;
        int size=p.length();
        vector<int>v(size, 0);
        for(int i=1; i<size; ++i){
            int j=v[i-1];
            while(j>0 && p[j]!=p[i]){
                j=v[j-1];
            }
            if (p[j]==p[i])
            {
                ++j;
            }
            v[i]=j;
        }
        string t=s.substr(v.back(), s.length()-v.back() +1);
        reverse(t.begin(), t.end());
        return t+s;
    }
};
class Solution {
public:
    string shortestPalindrome(string s) {
        int size=s.length();
        int mid=size/2;
        while(mid>=0){
            int l=mid;
            int r=mid;
            while(r<size && s[mid]==s[r])++r;
            while(l>=0 && s[mid]==s[l])--l;
            while(r<size && l>=0 && s[r]==s[l]){
                ++r;
                --l;
            }
            if(l<0){
                string t=s.substr(r, size-r);
                reverse(t.begin(), t.end());
                t+=s;
                return t;
            }
            --mid;
        }
        return "";
    }
};