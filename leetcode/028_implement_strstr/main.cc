class Solution {
public:
    int strStr(string haystack, string needle) {
        if( needle.length() == 0 ){
            return 0;
        }
        if( haystack.length() < needle.length() ){
            return -1;
        }

        int m = 0;
        while( m + needle.length() <= haystack.length() ){
            int n = 0;
            while( n < needle.length() && haystack[m+n] == needle[n] ){
                n++;
            }
            if( n == needle.length() ){
                return m;
            }
            else{
                m++;
            }
        }
        return -1;
    }
};