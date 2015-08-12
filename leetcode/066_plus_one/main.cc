class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res(digits);
        int size = digits.size();
        int carry = 1;
        for( int i=size-1; i>=0 && carry; --i ){
            int t = digits[i]+carry;
            res[i] = t%10;
            carry = t/10;
        }
        if(carry){
            res.insert(res.begin(), carry);
        }
        return res;
    }
};