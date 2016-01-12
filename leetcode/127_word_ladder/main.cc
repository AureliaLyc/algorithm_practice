#include <unordered_set>
#include <string>
#include <queue>
#include <vector>
using namespace std;

class Solution1 {
public:
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
        int size=beginWord.length();
        int len=0;
        if(beginWord==endWord) return 0;
        wordList.insert(endWord);
        queue<string> q;
        q.push(beginWord);
        wordList.erase(beginWord);
        while(!q.empty()){
            int qsize=q.size();
            ++len;
            for (int qi = 0; qi < qsize; ++qi)
            {
                string s=q.front();
                q.pop();
                for (int i = 0; i < size; ++i)
                {
                    char k=s[i];
                    for (int j = 'a'; j <='z'; ++j)
                    {
                        if (k!=j)
                        {
                            s[i]=j;
                            if (wordList.find(s) != wordList.end())
                            {
                                //if(s==endWord) return len+1;
                                q.push(s);
                                wordList.erase(s);
                                if(wordList.find(endWord)==wordList.end()) return len+1;
                            }
                        }
                    }
                    s[i]=k;
                }
            }
        }
        return 0;
    }
};

class Solution {
public:
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
        unordered_set<string> wLeft{beginWord};
        unordered_set<string> wRight{endWord};
        wordList.erase(beginWord);
        wordList.erase(endWord);
        int len=0;
        while(!wLeft.empty() && !wRight.empty()){
            ++len;
            if(wLeft.size()>wRight.size()){
                swap(wLeft, wRight);
            }
            unordered_set<string> wTemp;
            for(auto s:wLeft){
                for(int i=0; i<s.length(); ++i){
                    char c=s[i];
                    for(char j='a'; j<='z'; ++j){
                        if(j!=c){
                            s[i]=j;
                            if(wRight.find(s)!=wRight.end()){
                                return len+1;
                            }
                            else if(wordList.find(s)!=wordList.end()){
                                wTemp.insert(s);
                                wordList.erase(s);
                            }
                        }
                    }
                    s[i]=c;
                }
            }
            swap(wTemp, wLeft);
        }
        return 0;
    }
};
int main(int argc, char const *argv[])
{
    unordered_set<string> us{"hot","dog","dot"};
    Solution abc;
    abc.ladderLength("hot", "dog", us);
    return 0;
}