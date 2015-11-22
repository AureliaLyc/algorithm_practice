#include <vector>
#include <string>
#include <stack>
using namespace std;


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int size=tokens.size();
        stack<int> st;
        for(int i=0; i<size; ++i){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                int res=0;
                switch (tokens[i][0]){
                    case '+': res=a+b; break;
                    case '-': res=a-b; break;
                    case '*': res=a*b; break;
                    case '/': res=a/b; break;
                }
                st.push(res);
            }
            else{
                int a=stoi(tokens[i]);
                st.push(a);
            }
        }
        return st.top();
    }
};

int main(int argc, char const *argv[])
{
    vector<string> a={"4","-2","/","2","-3","-","-"};
    Solution abc;
    abc.evalRPN(a);
    return 0;
}