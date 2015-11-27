class Solution {
public:
    static bool comp(int a, int b){
        long long sizea=10;
        long long m=a;
        while(sizea<=m){
            sizea*=10;
        }
        long long n=b;
        long long sizeb=10;
        while(sizeb<=n){
            sizeb*=10;
        }
        return (m+sizea*n)<(n+sizeb*m);
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);
        string res;
        for( auto num : nums ){
            if(!res.empty() || num!=0){
                res+=to_string(num);
            }
        }
        if(res.empty()){
            res="0";
        }
        return res;
    }
};