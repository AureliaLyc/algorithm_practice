#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s;
        generate(res, n, n, s);
        return res;
    }

    void generate(vector<string>&res, int left, int right, string s){
        if(left){
            generate(res, left-1, right, s+"(");
        }
        if(left < right){
            generate(res, left, right-1, s+")");
        }
        if(right == 0){
            res.push_back(s);
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    sol.generateParenthesis(2);
    return 0;
}