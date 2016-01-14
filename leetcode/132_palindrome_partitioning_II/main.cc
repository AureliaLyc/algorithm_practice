class Solution {
public:
    int minCut(string s) {
        int len=s.length();
        vector<int> d(len+1, INT_MAX);
        d[0]=0;
        for(int i=0; i<len; ++i){
            int left=i;
            int right=i;
            while(right<len && s[left]==s[right]) {
                ++right;
                d[right]=min(d[left]+1, d[right]);
            }
            --left;
            while(left>=0 && right<len && s[left]==s[right]){
                ++right;
                d[right]=min(d[left--]+1, d[right]);
            }
        }
        return d[len]-1;
    }
};
class Solution {
public:
    int minCut(string s) {
        int len=s.length();
        if(len==0) return 0;
        vector<vector<int>> g(len, vector<int>(len+1, 0));
        for(int i=0; i<len; ++i){
            int left=i;
            int right=i;
            while(right<len && s[left]==s[right]) {
                g[left][++right]=1;
            }
            --left;
            while(left>=0 && right<len && s[left]==s[right]){
                g[left--][++right]=1;
            }
        }
        vector<int> d(len+1, INT_MAX);
        d[0]=0;
        for(int i=0; i<len; ++i){
            for(int j=i+1; j<=len; ++j){
                if(g[i][j]){
                    d[j]=min(d[i]+1, d[j]);
                }
            }
        }
        return d[len]-1;
    }
};