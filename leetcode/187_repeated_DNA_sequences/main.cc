#include <unordered_set>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> uss;
        vector<string> res;
        int size=s.length();
        for(int i=0; i<=size-10; ++i){
            string =s.substr(i, 10);
            if(uss.find(s)!=uss.end()){
                res.push_back(s);
            }
            uss.insert(s);
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    string a="AAAAAAAAAAA";
    Solution abc;
    abc.findRepeatedDnaSequences(a);
    return 0;
}