class Solution {
public:
    string convertToTitle(int n) {
        vector<char> res;
        do{
            int residue = (n-1) % 26;
            char t = 'A' + residue;
            res.push_back(t);
            n = (n-1)/26;
        }while( n > 0 );

        int size = res.size();
        string ret;
        for(int i = size-1; i >= 0; --i){
            ret.push_back( res[i] );
        }
        return ret;
    }
};