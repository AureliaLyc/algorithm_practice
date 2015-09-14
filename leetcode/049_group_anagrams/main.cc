class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        vector<vector<string> > res;
        res.reserve(size);
        unordered_map<string,int> stringMap;
        for(int i=0; i<size; ++i){
            string str = strs[i];
            sort(str.begin(), str.end());
            unordered_map<string,int>::iterator fnd = stringMap.find(str);
            if(fnd != stringMap.end()){
                res[fnd->second].emplace_back(strs[i]);
            }
            else{
                vector<string> temp(1);
                temp[0]=strs[i];
                res.push_back(temp);
                stringMap[str] = res.size()-1;
            }
        }
        size = res.size();
        for(int i=0; i<size; ++i){
            sort(res[i].begin(), res[i].end());
        }
        return res;
    }
};