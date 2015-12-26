class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        int k=words[0].length();
        int size=s.length();
        unordered_multiset<string> ws(words.begin(), words.end());
        for(int l=0; l<k; ++l){
            int left=l;
            int right=l;
            while(right<=size-k){
                string rs=s.substr(right, k);
                auto it=ws.find(rs);
                if(it!=ws.end()){ // could be candidate.
                    ws.erase(it);
                    right+=k;
                    if(ws.empty()){
                        res.push_back(left);
                        string ls=s.substr(left,k);
                        ws.insert(ls);
                        left+=k;
                    }
                }
                else{
                    if (left==right)
                    {
                        right+=k;
                        left=right;
                    }
                    while(left<right){
                        string ls=s.substr(left, k);
                        ws.insert(ls);
                        left+=k;
                        if(ls==rs) break;
                    }
                }
            }
            while(left<right){
                string ls=s.substr(left, k);
                ws.insert(ls);
                left+=k;
            }
        }
        return res;
    }
};