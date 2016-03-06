class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret;
        for( int i = 0; i <= rowIndex; ++i ){
            ret.push_back(1);
            int size = ret.size();
            for( int i = size - 2; i > 0; --i ){
                ret[i] = ret[i] + ret[i-1];
            }
        }
        return ret;
    }
};

class Solution2 {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r;
        r.resize(rowIndex + 1);
        r[0] = r[rowIndex] = 1;
        for(auto i = 1; i < (r.size() + 1)/2; ++i)
        {
            r[i] = r[rowIndex - i] = (unsigned long)r[i - 1]*(unsigned long)(rowIndex - i + 1)/i;
        }
        return r;
    }
};
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1, 1);
        for(int i=0; i<=rowIndex; ++i){
            for(int j=i-1; j>=1; --j){
                res[j]+=res[j-1];
            }
        }
        return res;
    }
};