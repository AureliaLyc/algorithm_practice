#include <string>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int sz1=s1.length(), sz2=s2.length(), sz3=s3.length();
        if(sz1+sz2!=sz3) return false;
        if(sz3==0) return true;
        if(sz1==0) return s2==s3;
        if(sz2==0) return s1==s3;
        vector<vector<int>> v(sz1+1, vector<int>(sz2+1, -1));
        return check(s1, 0, s2, 0, s3, 0, v);
    }
    bool check(string& s1, int o, string& s2, int p, string& s3, int q, vector<vector<int>>& v){
        if(v[o][p]==1) return true;
        else if(v[o][p]==0) return false;
        bool res=false;
        if(o<s1.length() && s1[o]==s3[q]){
            res=check(s1, o+1, s2, p, s3, q+1, v);
        }
        if(!res){
            if(p<s2.length() && s2[p]==s3[q]){
                res=check(s1, o, s2, p+1, s3, q+1, v);
            }
        }
        v[o][p]=res;
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution abc;
    abc.isInterleave("a", "b", "ab");
    abc.isInterleave("aabcc", "dbbca", "aadbbbaccc");
    return 0;
}