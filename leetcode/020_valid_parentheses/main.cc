class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        size_t size = s.length();
        for(size_t i=0; i<size; ++i){
            char m = s[i];
            if( m == '(' || m == '[' || m == '{' ){
                t.push(m);
            }
            else{
                if( t.empty() ){
                    return false;
                }
                else if( m == ')' && t.top() != '('){
                    return false;
                }
                else if( m == ']' && t.top() != '[' ){
                    return false;
                }
                else if( m == '}' && t.top() != '{' ){
                    return false;
                }
                t.pop();
            }
        }

        return t.empty();
    }
};