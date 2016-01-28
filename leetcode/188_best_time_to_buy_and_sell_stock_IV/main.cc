class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int size=prices.size();
        if(size<2 || k<1) return 0;
        if(k>=size/2){
            int res=0;
            for(int i=1; i<size; ++i){
                if(prices[i]>prices[i-1]){
                    res+=(prices[i]-prices[i-1]);
                }
            }
            return res;
        }
        vector<int> o(k, INT_MIN);
        vector<int> profit(k, 0);
        for(int i=0; i<size; ++i){
            o[0]=max(o[0], -prices[i]);
            profit[0]=max(profit[0], prices[i]+o[0]);
            for(int j=0; j<k-1; ++j){
                o[j+1]=max(o[j+1], profit[j]-prices[i]);
                profit[j+1]=max(profit[j+1], o[j+1]+prices[i]);
            }
        }
        return profit.back();
    }
};