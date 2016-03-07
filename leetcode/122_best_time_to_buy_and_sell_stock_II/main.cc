class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int res=0;
        if(size>1){
            for(int i=1; i<size; ++i){
                if(prices[i-1]<prices[i]){
                    res+=(prices[i]-prices[i-1]);
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int size=prices.size();
        for(int i=1; i<size; ++i){
            res+=max(0, prices[i]-prices[i-1]);
        }
        return res;
    }
};