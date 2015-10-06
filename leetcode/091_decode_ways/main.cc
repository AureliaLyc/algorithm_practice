class Solution {
public:
    int numDecodings(string s) {
        int size=s.length();
        if(size==0||s[0]=='0') return 0;
        int f0=1, f1=1;
        for(int i=1; i<size; ++i){
            int t=f1;
            if(s[i-1]=='1'){
                if(s[i]=='0') f1=f0;
                else f1+=f0;
            }
            else if(s[i-1]=='2'){
                if(s[i]=='0') f1=f0;
                else if(s[i]>='1' && s[i]<='6') f1+=f0;
            }
            else{
                if(s[i]=='0') return 0;
            }
            f0=t;
        }
        return f1;
    }
};