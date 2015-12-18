#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<vector<int> > f(26, vector<int>());
        int size=s.length();
        int num=0;
        for(int i=size-1; i>=0; --i){
            if(f[s[i]-'a'].empty()) ++num;
            f[s[i]-'a'].push_back(i);
        }
        string res;
        int maxi=INT_MIN;
        while(num!=0){
            for(int i=0; i<26; ++i){
                if(!f[i].empty()){
                    while(f[i].back()<maxi) f[i].pop_back();
                    int idx=f[i].back();
                    int j=i+1;
                    for(; j<26 && (f[j].empty() || f[j].front()>idx); ++j);
                    if(j==26){
                        res.push_back('a'+i);
                        f[i].clear();
                        --num;
                        maxi=idx;
                        break;
                    }
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> f(26, 0);
        int size=s.length();
        for(int i=0; i<size; ++i) f[s[i]-'a']++;
        string res;
        for(int i=0; i<size; ++i){
            char c=s[i];
            if(res.find(c)==string::npos){
                while(!res.empty() && res.back()>c && f[res.back()-'a']>0){
                    res.pop_back();
                }
                res.push_back(c);
            }
            --f[c-'a'];
        }
        return res;
    }
};