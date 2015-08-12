class Solution {
public:
    string countAndSay(int n) {
        string t;
        if( n > 0 ){
            t = "1";
            while(n > 1){
                string s;
                int i = 0, j = 1;
                size_t len = t.length();
                while( j <= len ){
                    if( j == len || t[i] != t[j] ){
                        s.push_back('0'+(j-i));
                        s.push_back(t[i]);
                        i = j;
                    }
                    j++;
                }
                swap(t, s);
                n--;
            }
        }
        return t;
    }
};