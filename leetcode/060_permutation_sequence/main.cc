class Solution {
public:
    string getPermutation(int n, int k) {
        string res;
        vector<int> can(n,1);
        vector<int> pro(n-1,1);
        for(int i=2; i<n; ++i){
            can[i-1]=i;
            pro[i-1]=pro[i-2]*i;
        }
        can[n-1]=n;
        while(!pro.empty()){
            int s = pro.back();
            int index = (k-1)/s;
            res.push_back('0'+can[index]);
            can.erase(can.begin()+index);
            k-=index*s;
            pro.pop_back();
        }
        res.push_back('0'+can[0]);
        return res;
    }
};