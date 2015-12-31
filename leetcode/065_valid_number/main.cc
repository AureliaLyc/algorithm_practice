#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isNumber(string s) {
        int size=s.length();
        int i=0;
        int end=size;
        // strip space firstly.
        while(i<size && (s[i]==' ' || s[i]=='\t')) ++i;
        while(end>0 && (s[end-1]==' ' || s[end-1]=='\t')) --end;
        // pos+neg.
        if(s[i]=='+'||s[i]=='-') ++i;
        bool dot=false;
        bool e=false;
        if(s[i]=='.'){
            if(dot) return false;
            dot=true;
            ++i;
        }
        bool num=false;
        bool enumber=false;
        // starts with number.
        if(s[i]<'0'||s[i]>'9') return false;
        for(; i<end; ++i){
            // normal number.
            if(s[i]>='0' && s[i]<='9'){
                num=true;
                if(e) enumber=true;
                continue;
            }
            if(s[i]=='.'){
                if(e){
                    // after e, no dot anymore.
                    return false;
                }
                else{
                    //after dot, before e, no extra dot.
                    if(dot) return false;
                    dot=true;
                }
            }
            else if(s[i]=='e' || s[i]=='E'){
                // after e, no more e
                if(e) return false;
                e=true;
                if(i<end-1 && (s[i+1]=='+' || s[i+1]=='-')) ++i;
            }
            else{
                return false;
            }
        }
        return num && (e == enumber);
    }
};
int main(int argc, char const *argv[])
{
    Solution abc;
    abc.isNumber(" 005047e+6");
    return 0;
}