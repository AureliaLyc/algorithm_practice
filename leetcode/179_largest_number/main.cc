class Solution {
public:
    static bool comp(int a, int b){
        int sizea=1;
        long long m=a;
        do{
            sizea*=10;
            a/=10;
        }while(a);
        long long n=b;
        int sizeb=1;
        do{
            sizeb*=10;
            b/=10;
        }while(b);
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