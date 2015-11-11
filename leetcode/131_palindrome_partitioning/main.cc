class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> vs;
        build(s, 0, vs, res);
        return res;
    }
    void build(string& s, int start, vector<string>& vs, vector<vector<string>>& res ){
        int end = s.length();
        if(start>=end){
            res.push_back(vs);
        }
        while(start<end){
            int left = start;
            int right= end-1;
            while(left<=right && s[left]==s[right]){
                ++left;
                --right;
            }
            if(right-left<1){
                vs.push_back(s.substr(start, end-start));
                build(s, end, vs, res);
                vs.pop_back();
            }
            --end;
        }
    }
};