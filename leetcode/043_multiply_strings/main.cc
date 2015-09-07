#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string addTwo(string& num1, string& num2){
        if(num1.length() < num2.length()){
            return addTwo(num2, num1);
        }
        string res;
        int carry = 0;
        for(int i=num1.length()-1, j=num2.length()-1; i>=0; --i, --j){
            int left = num1[i]-'0';
            int right = j>=0 ? num2[j]-'0' : 0;
            int result = left + right + carry;
            res.push_back('0' + result%10);
            carry = result/10;
        }
        if(carry){
            res.push_back('0' + carry);
        }
        reverse(res.begin(), res.end());
        return res;
    }
    string multiply(string num1, string num2) {
        string res;
        if(num1.length() < num2.length()){
            return multiply(num2, num1);
        }
        if(num2.length() == 0){
            return res;
        }
        vector<string> v(9);
        v[0]=num1;
        for(int i=0; i<8; ++i){
            v[i+1] = addTwo(v[i], num1);
        }
        for(int i=num2.length()-1; i>=0; --i){
            char m = num2[i];
            if(res.empty()){
                if(m=='0'){
                    res = "0";
                }
                else{
                    res = v[m-'1'];
                }
            }
            else{
                if(m=='0'){
                    continue;
                }
                string t = v[m-'1'];
                string zeros(num2.length()-1-i, '0');
                t += zeros;
                res = addTwo(res, t);
            }
        }
        return res;
    }
};


int main(int argc, char const *argv[])
{
    string a("9");
    string b("9");
    Solution sol;
    sol.multiply(a,b);
    return 0;
}

class Solution2 {
public:
    string multiply(string num1, string num2) {
        int size1 = num1.length();
        int size2 = num2.length();
        string res(size1+size2, '0');
        int carry = 0;
        for(int i=size1-1; i>=0; --i){
            for(int j=size2-1; j>=0; --j){
                int t = carry + res[j+i+1]-'0' + (num1[i]-'0') * (num2[j]-'0');
                res[j+i+1] = t%10+'0';
                carry = t/10;
            }
            res[i] += carry;
            carry=0;
        }
        size_t pos = res.find_first_not_of("0");
        if(pos != string::npos){
            return res.substr(pos);
        }
        return "0";
    }
};