#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int numDistinct(string s, string t) {
        int sz=s.length();
        int tz=t.length();
        vector<vector<int>> d(tz+1, vector<int>(sz+1, -1));
        return visit(s, 0, t, 0, d);
    }
    int visit(string& s, int m, string& t, int n, vector<vector<int>>& d){
        if(n==t.length()) return 1;
        if(m==s.length()) return 0;
        int& ans=d[n][m];
        if(ans>=0) return ans;
        ans=t[n]==s[m]?visit(s, m+1, t, n+1, d)+visit(s, m+1, t, n, d):visit(s, m+1, t, n, d);
        return ans;
    }
};

// turn the code into iterative pattern.
class Solution {
public:
    int numDistinct(string s, string t) {
        int sz=s.length();
        int tz=t.length();
        if(tz==0) return 1;
        if(sz==0) return 0;
        vector<vector<int>> d(tz, vector<int>(sz, 0));
        d[tz-1][sz-1]=t[tz-1]==s[sz-1];
        for(int j=sz-2; j>=0; --j){
            d[tz-1][j]=d[tz-1][j+1]+(t[tz-1]==s[j]);
        }
        for (int i = tz-2; i >=0; --i)
        {
            for (int j = sz-(tz-i); j>=0; --j)
            {
                d[i][j]=t[i]==s[j]?d[i+1][j+1]+d[i][j+1]:d[i][j+1];
            }
        }
        return d[0][0];
    }
};

int main(int argc, char const *argv[])
{
    Solution2 abc;
    abc.numDistinct("aabb", "ab");
    return 0;
}