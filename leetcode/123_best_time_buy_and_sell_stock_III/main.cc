#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int profit1=0;
        int profit2=0;
        int o1=INT_MAX;
        int o2=INT_MIN;
        for(int i=0; i<size; ++i){
            o1=min(o1, prices[i]);
            profit1=max(profit1, prices[i]-o1);
            o2=max(o2, profit1-prices[i]);
            profit2=max(profit2, prices[i]+o2);
        }
        return profit2;
    }
};

int main(int argc, char const *argv[])
{
    int a[]={100,200,101,199,99,201};
    std::vector<int> v(a, a+sizeof(a)/sizeof(int));
    Solution abc;
    abc.maxProfit(v);
    return 0;
}