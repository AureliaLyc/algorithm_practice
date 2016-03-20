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


class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int size=s.length();
        vector<string> res;
        vector<char> um(0xFFFFF, 0);
        int mask=0xFFFFF;
        int val=0;
        for(int i=0; i<size; ++i){
            val=val<<2;
            if(s[i]=='C'){
                val|=1;
            }
            else if(s[i]=='G'){
                val|=2;
            }
            else if(s[i]=='T'){
                val|=3;
            }
            if(i>8){
                val=val&mask;
                if(um[val]++==1){
                    res.push_back(s.substr(i-9, 10));
                }
            }
        }
        return res;
    }
};