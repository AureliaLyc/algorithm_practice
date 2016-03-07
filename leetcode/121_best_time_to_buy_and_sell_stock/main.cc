class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int res=0;
        if(size>1){
            int lowest=prices[0];
            for(int i=1; i<size; ++i){
                if(prices[i]-lowest>res){
                    res=prices[i]-lowest;
                }
                if(prices[i]<lowest){
                    lowest = prices[i];
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
        int low=INT_MAX;
        for(int i=0; i<size; ++i){
            low=min(prices[i], low);
            res=max(res, prices[i]-low);
        }
        return res;
    }
};