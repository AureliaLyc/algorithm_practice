class Solution {
public:

    int romanToInt(string s) {
        vector<int> romanMap(26);
        romanMap['I'-'A'] = 1;
        romanMap['V'-'A'] = 5;
        romanMap['X'-'A'] = 10;
        romanMap['L'-'A'] = 50;
        romanMap['C'-'A'] = 100;
        romanMap['D'-'A'] = 500;
        romanMap['M'-'A'] = 1000;

        int size = s.length();

        if(size == 0){
            return 0;
        }
        else if( size == 1 ){
            return romanMap[s[0]-'A'];
        }
        int i = 0;
        int res = 0;
        while( i < size - 1 ){
            int p = s[i++]-'A';
            int q = s[i]-'A';
            res = romanMap[p] < romanMap[q] ? res - romanMap[p] : res + romanMap[p];
        }
        res += romanMap[s[i]-'A'];
        return res;
    }
    int romanToInt2(string s){
        int res = 0;
        int last = 0;
        int size = s.length();
        for (int i = size-1; i >=0 ; --i)
        {
            int cur;
            switch(s[i]){
                case 'I': cur = 1; break;
                case 'V': cur = 5; break;
                case 'X': cur = 10; break;
                case 'L': cur = 50; break;
                case 'C': cur = 100; break;
                case 'D': cur = 500; break;
                case 'M': cur = 1000; break;
            }
            if (cur >= last)
            {
                res += cur;
            }
            else{
                res -= cur;
            }
            last = cur;
        }
        return res;
    }
};