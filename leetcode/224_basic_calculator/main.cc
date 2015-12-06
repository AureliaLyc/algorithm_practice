class Solution {
public:
    int calculate(string s) {
        vector<int> st;
        vector<char>actions;
        int len=s.length();
        int t=0;
        for(int i=0; i<len; ++i){
            bool isDigit=false;
            char c=s[i];
            if(c>='0'&&c<='9'){
                t=t*10+c-'0';
                if(i==len-1||(s[i+1]<'0'||s[i+1]>'9')){
                    st.push_back(t);
                    isDigit=true;
                    t=0;
                }
            }
            else if(c=='+'||c=='-'||c=='('){
                actions.push_back(c);
            }
            else if(c==')'){
                actions.pop_back();
                isDigit=true;
            }
            if(isDigit && !actions.empty() && actions.back()!='('){
                int t=st.back();
                st.pop_back();
                if(actions.back()=='+'){
                    st[st.size()-1]+=t;
                }
                else{
                    st[st.size()-1]-=t;
                }
                actions.pop_back();
            }
        }
        return st.empty()?0:st[0];
    }
};