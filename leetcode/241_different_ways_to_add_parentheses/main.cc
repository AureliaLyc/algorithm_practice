class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        int size=input.size();
        vector<int> res;
        for(int i=0; i<size; ++i){
            if(input[i]<'0' || input[i]>'9'){
                vector<int> l=diffWaysToCompute(input.substr(0, i));
                vector<int> r=diffWaysToCompute(input.substr(i+1, size-i-1));
                for(auto li:l){
                    for(auto ri:r){
                        int val;
                        if(input[i]=='+') val=li+ri;
                        else if(input[i]=='-') val=li-ri;
                        else val=li*ri;
                        res.push_back(val);
                    }
                }
            }
        }
        if(res.empty())
            res.push_back(stoi(input));
        return res;
    }
};