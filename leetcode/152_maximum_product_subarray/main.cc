class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=0;
        int prod1, prod2;
        bool metZero=true, metNeg=false;
        int size=nums.size();
        for(int i=0; i<size; ++i){
            if(i==0) res=nums[i];
            if(nums[i]!=0){
                if(metZero){
                    metZero=false;
                    prod1=1;
                    prod2=1;
                    res=max(res, nums[i]);
                }
                prod1*=nums[i];
                if(metNeg){
                    prod2*=nums[i];
                }
                res=max(res, max(prod1, metNeg?prod2:prod1));
                if(nums[i]<0){
                    metNeg=true;
                }
            }
            else{
                metZero=true;
                metNeg=false;
                res=max(res,nums[i]);
            }
        }
        return res;
    }
};


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size=nums.size();
        if(size<1) return 0;
        int imax=nums[0];
        int imin=nums[0];
        int res=nums[0];
        for(int i=1; i<size; ++i){
            if(nums[i]<0) swap(imax, imin);
            imax=max(nums[i], nums[i]*imax);
            imin=min(nums[i], nums[i]*imin);
            res=max(res, imax);
        }
        return res;
    }
};