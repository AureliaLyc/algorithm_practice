class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> pos;
        int res=0;
        int size=s.length();
        int start=-1;
        for(int i=0; i<size; ++i){
            if(s[i]=='('){
                pos.push(i);
            }
            else if(!pos.empty()){
                pos.pop();
                res=max(res, pos.empty()?i-start:(i-pos.top()));
            }
            else{
                start=i;
            }
        }
        return res;
    }
};

class Solution2 {
public:
    int longestValidParentheses(string s) {
        int size=s.length();
        int res=0;
        vector<int> d(size, 0);
        for(int i=1; i<size; ++i){
            if(s[i]==')'){
                int prev=i-1-d[i-1];
                if(prev>=0 && s[prev]=='('){
                    d[i]=d[i-1]+2;
                    if(prev>1){
                        d[i]=d[i]+d[prev-1];
                    }
                }
                res=max(res, d[i]);
            }
        }
        return res;
    }
};