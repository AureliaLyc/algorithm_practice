class Solution {
public:
    bool isMatch(string s, string p) {
        int sz=s.length();
        int sp=p.length();
        int star=-1;
        int match=-1;
        int si=0;
        int pi=0;
        while(si<sz){
            if((s[si]==p[pi] || p[pi]=='?')){
                ++si;
                ++pi;
            }
            else if(p[pi]=='*'){
                star=pi++;
                match=si;
            }
            else if(star>=0){
                pi=star+1;
                si=++match;
            }
            else
                return false;
        }
        while(pi<sp && p[pi]=='*') ++pi;
        return pi==sp;
    }
};

class Solution {
public:
    bool isMatch(string s, string p) {
        int sz=s.length();
        int sp=p.length();
        vector<int> f(sz+1, 0);
        vector<int> g(sz+1, 0);
        f[0]=1;
        int right=1;
        for(int i=0; i<sp; ++i){
            int k=right;
            bool b=false;
            for(int j=0; j<right; ++j){
                if(f[j]){
                    if(j<sz){
                        if(p[i]==s[j] || p[i]=='?'){
                            k=j+1;
                            g[k]=1;
                            b=true;
                        }
                    }
                    if(p[i]=='*') {
                        int l=j;
                        while(l<sz+1) g[l++]=1;
                        k=sz;
                        b=true;
                    }
                }
            }
            if(!b) return false;
            right=k+1;
            swap(f, g);
            fill(g.begin(), g.end(), 0);
        }
        return f.back();
    }
};