class Solution {
public:
    static bool comp(int* a, int* b){
        return *a < *b;
    }
    int maxArea(vector<int>& height) {
        vector<int*> ptrs;
        size_t size = height.size();
        ptrs.resize(size);
        for(size_t i=0; i<size; ++i){
            ptrs[i] = &height[i];
        }
        sort(ptrs.begin(), ptrs.end(), comp);
        size_t left = 0;
        size_t right = size - 1;
        size_t maxarea = 0;
        for(size_t i=0; left < right && i<size-1; ++i){
            int cur = *(ptrs[i]);
            int pos = ptrs[i] - &height[0];
            maxarea = max(maxarea, cur*(max(pos-left, right-pos)));
            if(pos == left){
                left++;
                while(left < right && height[left] < 0 ){
                    ++left;
                }
            }
            else if(pos == right){
                right--;
                while(left < right && height[right] < 0){
                    --right;
                }
            }
            height[pos] = -1;
        }
        return maxarea;
    }
};

class Solution2 {
public:
    int maxArea(vector<int>& height) {
        int left =0, right= height.size()-1, res = 0, minHeight =0;
        while(left<right)
        {
            if(height[left] <= minHeight){
                ++left;
            }
            else if(height[right] <= minHeight) {
                --right;
            }
            else
            {
                minHeight = height[left] <= height[right] ? height[left++] : height[right--];
                res = max(res, minHeight*(right-left+1));
            }
        }
        return res;
    }
};