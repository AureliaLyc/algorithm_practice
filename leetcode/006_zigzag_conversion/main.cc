class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1){
            return s;
        }
        string t;
        size_t size = s.length();
        t.reserve(size);
        for(int i=0; i<numRows; ++i){
            for(int j=i, n = 0; j<size; ++n ){
                t.push_back(s[j]);
                if(i == 0 || i == numRows-1){
                    j = j + (2*(numRows-1));
                }
                else{
                    j = n%2 ? (j+2*i) : (j+(2*(numRows-1) - 2*i));
                }
            }
        }
        return t;
    }
};