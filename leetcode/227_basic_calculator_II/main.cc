class Solution {
public:
    int calculate(string s) {
        vector<int> st;
        vector<char>actions;
        int len=s.length();
        int t=0;
        for(int i=0; i<len; ++i){
            char c=s[i];
            if(c>='0'&&c<='9'){
                t=t*10+c-'0';
                if(i==len-1 || s[i+1]<'0' || s[i+1]>'9'){
                    if(!actions.empty() && st.size()==actions.size() && (actions.back()=='*'||actions.back()=='/')){
                        st[st.size()-1]=(actions.back()=='*')?st[st.size()-1]*t:st[st.size()-1]/t;
                        actions.pop_back();
                    }
                    else
                        st.push_back(t);
                    t=0;
                }
            }
            else if(c=='+'||c=='-'||c=='*'||c=='/'){
                actions.push_back(c);
            }
        }
        int size=actions.size();
        int res=st[0];
        for(int i=0; i<size; ++i){
            res+=(st[i+1]*(actions[i]=='+'?1:-1));
        }
        return res;
    }
};