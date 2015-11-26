class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        string res;
        long long a=numerator;
        long long b=denominator;
        bool neg=false;
        if(a<0){
            neg=!neg;
            a=-a;
        }
        if(b<0){
            neg=!neg;
            b=-b;
        }
        if(neg && a!=0) res="-";
        long long p=a%b;
        long long q=a/b;
        stringstream ss;
        ss<<q;
        res+=ss.str();
        if(p!=0){
            res.push_back('.');
            unordered_map<long long, int> nm;
            do{
                nm[p]=res.length();
                a=10*p;
                q=a/b;
                p=a%b;
                res.push_back('0'+q);
            }while(p!=0 && nm.find(p)==nm.end());
            if(p!=0){
                res.insert(nm[p], "(");
                res.push_back(')');
            }
        }
        return res;
    }
};