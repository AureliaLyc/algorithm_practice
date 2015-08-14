class Solution {
public:
    int myAtoi(string str) {
        size_t size = str.length();
        string t;
        long long res=0;
        int sign = 1;
        size_t i=0;
        for(; i<size; ++i){
            if(!isspace(str[i])){
                break;
            }
        }
        if(str[i] == '-' ){
            sign = -1;
            ++i;
        }
        else if(str[i] == '+'){
            ++i;
        }
        for(; i<size; ++i){
            if(isdigit(str[i])){
                t.push_back(str[i]);
            }
            else{
                break;
            }
        }
        size = t.length();
        for(int j=0; j<size; ++j){
            int a = t[j]-'0';
            res = res*10 + a;
            if(res > INT_MAX ) break;
        }
        res *= sign;

        res = res > INT_MAX ? INT_MAX : res;
        res = res < INT_MIN ? INT_MIN : res;
        return res;
    }
};