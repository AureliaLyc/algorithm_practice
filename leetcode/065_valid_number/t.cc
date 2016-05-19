#include <string>
using namespace std;


class Solution {
public:
    bool isNumber(string s) {
        int size=s.length();
        int i=0;
        while(i<size&&s[i]==' ') ++i;
        int state=0;
        while(i<size){
            if(state==0){
                if(s[i]=='+'||s[i]=='-') state=1;
                else if(s[i]>='0'&&s[i]<='9') state=2;
                else if(s[i]=='.') state=3;
                else break;
            }
            else if(state==1){
                if(s[i]>='0'&&s[i]<=9) state=2;
                else if(s[i]=='.') state=3;
                else break;
            }
            else if(state==2){
                if(s[i]>='0'&&s[i]<='9') state=2;
                else if(s[i]=='.') state=9;
                else if(s[i]=='e') state=5;
                else if(s[i]==' ') state=8;
                else break;
            }
            else if(state==3){
                if(s[i]>='0'&&s[i]<='9') state=4;
                else break;
            }
            else if(state==9){
                if(s[i]>='0'&&s[i]<='9') state=4;
                else if(s[i]=='e') state=5;
                else if(s[i]==' ') state=8;
                else break;
            }
            else if(state==4){
                if(s[i]>='0'&&s[i]<='9') state=4;
                else if(s[i]=='e') state=5;
                else if(s[i]==' ') state=8;
                else break;
            }
            else if(state==5){
                if(s[i]=='+'||s[i]=='-') state=6;
                else if(s[i]>='0'&&s[i]<='9') state=7;
                else break;
            }
            else if(state==6){
                if(s[i]>='0'&&s[i]<='9') state=7;
                else break;
            }
            else if(state==7){
                if(s[i]>='0'&&s[i]<='9') state=7;
                else if(s[i]==' ') state=8;
                else break;
            }
            else if(state==8){
                if(s[i]==' ') state=8;
                else break;
            }
            ++i;
        }
        return (i==size&&(state==2||state==7||state==8||state==9||state==4));
    }
};
int main(int argc, char const *argv[])
{
    Solution abc;
    abc.isNumber("-1.");
    return 0;
}