#include <string>
#include <iostream>
#include <assert.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        for(int i=1; i<n; ++i){
            string t;
            for(int j=0; j<s.length();){
                char c=s[j];
                int cnt=0;
                while(j<s.length() && c==s[j]){
                    ++j; ++cnt;
                }
                assert(cnt<10);
                t.push_back('0'+cnt);
                t.push_back(c);
            }
            swap(s, t);
            cout<< i << endl;
        }
        return s;
    }
};

int main(int argc, char const *argv[])
{
    Solution abc;
    cout<< abc.countAndSay(100);
    return 0;
}