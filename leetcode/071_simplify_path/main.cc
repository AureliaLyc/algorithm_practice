class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stac;
        int size=path.size();
        int l=0;
        for(int i=0; i<=size; ++i){
            if(i==size || path[i]=='/'){
                string t=path.substr(l, i-l);
                l=i+1;
                if(!t.empty()){
                    if(t==".") continue;
                    if(t==".." && !stac.empty()) stac.pop_back();
                    else stac.push_back(t);
                }
            }
        }
        string res;
        for(auto i: stac){
            res+="/";
            res+=i;
        }
        return res.empty()?"/":res;
    }
};