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