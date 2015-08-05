class Solution {
public:
    bool isHappy(int n) {
        set<int> myResults;
        while(n != 1){
            bool res = myResults.insert(n).second;
            if (!res)
            {
                break;
            }
            n = calculate(n);
        }
        return n == 1;
    }
    int calculate( int n ){
        int res = 0;
        do{
            int residue = n % 10;
            res += residue * residue;
            n = n / 10;
        }while(n != 0);
        return res;
    }
};