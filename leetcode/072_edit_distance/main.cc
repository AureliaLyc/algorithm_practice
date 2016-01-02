class Solution {
public:
    int minDistance(string word1, string word2) {
        int s1=word1.length();
        int s2=word2.length();
        vector<int> d(s2+1, 0);
        for(int i=0; i<=s2; ++i){
            d[i]=i;
        }
        for(int i=1; i<=s1; ++i){
            int x=d[0];
            d[0]=i;
            for(int j=1; j<=s2; ++j){
                int ans=(word1[i-1]==word2[j-1])?x:min(min(d[j]+1, d[j-1]+1), x+1);
                x=d[j];
                d[j]=ans;
            }
        }
        return d[s2];
    }
};