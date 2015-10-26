class Solution {
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