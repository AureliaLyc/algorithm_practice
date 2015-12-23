#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int size=s.length();
        vector<bool> f(size+1, false);
        vector<bool> g(size+1, false);
        f[0]=true;
        int i=0;
        int sizep=p.size();
        bool matched=true;
        int left=0;
        int right=1;
        while(i<sizep && matched){
            matched=false;
            char c=p[i];
            bool matchm=i<sizep-1?p[i+1]=='*':false;
            int j=left;
            for(; j<right; ++j){
                if(!f[j]) continue;
                char n=s[j];
                if(n==c||c=='.'){
                    matched=true;
                    if(matchm){
                        int k=j;
                        g[k++]=true;
                        while(k<size+1 && (s[k-1]==n || c=='.')) {
                            g[k++]=true;
                        }
                    }
                    else{
                        g[j+1]=true;
                    }
                }
                else if(matchm){
                    matched=true;
                    g[j]=true;
                }
            }
            left=INT_MAX;
            right=INT_MIN;
            for(int m=0; m<size+1; ++m){
                if(g[m]){
                    left=min(left, m);
                    right=max(right, m+1);
                }
                f[m]=g[m];
                g[m]=false;
            }
            i+=1+matchm;
        }
        return f.back();
    }
};

int main(int argc, char const *argv[])
{
    Solution abc;
    abc.isMatch("aaa", "aaaa");
    return 0;
}