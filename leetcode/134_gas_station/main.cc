class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size=gas.size();
        int sum=0;
        int res=0;
        int total=0;
        for(int i=0; i<size; ++i){
            int gc=gas[i]-cost[i];
            total+=gc;
            sum+=gc;
            if(sum<0){
                sum=0;
                res=i+1;
            }
        }
        return total<0?-1:res;
    }
};