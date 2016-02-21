#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int ss=s.length();
        int ps=p.length();
        int si=0;
        int pi=0;
        int star=-1;
        int matched=-1;
        while(si<ss){
            if(s[si]==p[pi]||p[pi]=='?'){
                ++si; ++pi;
            }
            else if(p[pi]=='*'){
                star=pi++;
                matched=si;
            }
            else if(star>=0){
                pi=star+1;
                si=++matched;
            }
            else{
                return false;
            }
        }
        while(pi<ps && p[pi]=='*') ++pi;
        return pi==ps;
    }
};

int main(int argc, char const *argv[])
{
    Solution abc;
    abc.isMatch("aaa", "aa");
    return 0;
}