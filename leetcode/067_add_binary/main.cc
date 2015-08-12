class Solution {
public:
    string addBinary(string a, string b) {
        if( a.length() < b.length() ){
            swap(a, b);
        }
        int sizeb = b.length();
        int sizea = a.length();
        int carry = 0;
        int i = sizeb-1;
        int j = sizea-1;

        for(; (i>=0 || carry)&&j>=0; --i, --j){
            int t = a[j]-'0'+carry+(i>=0?b[i]-'0':0);
            if(t==1){
                a[j] = '1';
                carry = 0;
            }
            else if(t==2){
                a[j] = '0';
                carry = 1;
            }
        }
        if(carry){
            a.insert(0, 1, '1');
        }
        return a;
    }
};