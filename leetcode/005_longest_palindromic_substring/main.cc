#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(const char* s, size_t size){
        for(size_t i=0, j=size-1; i<j; ++i, --j){
            if(s[i] != s[j]){
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        size_t size = s.length();
        if(size < 2){
            return s;
        }
        const char* sc = s.c_str();
        // doesn't include the last pos.[).
        for( size_t i=size; i>1; --i){
            for(size_t j=0; j+i<=size; ++j){
                bool res = isPalindrome(sc+j, i);
                if(res){
                    return string(sc+j, i);
                }
            }
        }
        return s;
    }
};

class Solution2 {
public:
    string longestPalindrome(string s) {
        size_t size = s.length();
        if(size < 2){
            return s;
        }
        string res;
        size_t eStart = 0;
        size_t eEnd = 0;
        size_t i = 0;
        size_t j = 0;
        for( ; 2*size-eStart-eEnd > res.length(); eStart = eEnd){
            while(s[eStart] == s[eEnd]){
                ++eEnd;
            }
            i = eStart-1;
            j = eEnd;
            for(; i>=0 && j<size; --i, ++j){
                if(s[i] != s[j]){
                    break;
                }
            }
            size_t nSize = j-1-i;
            if(nSize > res.length()){
                res = s.substr(i+1, nSize);
            }
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    string a("ujtofmboiyyrjzbonysurqfxylvhuzzrzqwcjxibhawifptuammlxstcjmcmfvjuphyyfflkcbwimmpehqrqcdqxglqciduhhuhbjnwaaywofljhwzuqsnhyhahtkilwggineoosnqhdluahhkkbcwbupjcuvzlbzocgmkkyhhglqsvrxsgcglfisbzbawitbjwycareuhyxnbvounqdqdaixgqtljpxpyrccagrkdxsdtvgdjlifknczaacdwxropuxelvmcffiollbuekcfkxzdzuobkrgjedueyospuiuwyppgiwhemyhdjhadcabhgtkotqyneioqzbxviebbvqavtvwgyyrjhnlceyedhfechrbhugotqxkndwxukwtnfiqmstaadlsebfopixrkbvetaoycicsdndmztyqnaehnozchrakt");
    Solution2 sol;
    string b = sol.longestPalindrome(a);
    return 0;
}