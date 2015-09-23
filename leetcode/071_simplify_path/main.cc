class Solution {
public:
    string simplifyPath(string path) {
        vector<string> dirs;
        size_t start = 0;
        path.push_back('/');
        size_t found = path.find_first_of("/");
        while (found!=std::string::npos)
        {
            if(start != found){
                string sub = path.substr(start, found-start);
                if( sub == "." || sub.empty())
                {}
                else if( sub == "..") {
                    if(!dirs.empty()){
                        dirs.pop_back();
                    }
                }
                else
                    dirs.push_back(sub);
            }
            start = found+1;
            found=path.find_first_of("/",start);
        }
        string res;
        res.push_back('/');
        int size=dirs.size();
        for(int i=0; i<size; ++i){
            if(i) res.push_back('/');
            res += dirs[i];
        }
        return res;
    }
};