class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> win;
        vector<int> res;
        int size=nums.size();
        for(int i=0; i<size; ++i){
            while(!win.empty() && nums[win.back()]<=nums[i]) win.pop_back();
            win.push_back(i);
            if(i>=k-1){
                res.push_back(nums[win.front()]);
            }
            if(win.front()==i+1-k){
                win.pop_front();
            }
        }
        return res;
    }
};