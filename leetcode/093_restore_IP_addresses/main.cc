class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        string t;
        int size=s.length();
        create(s, res, t, 0, 0);
        return res;
    }
    void create(string& s, vector<string>& res, string& t, int start, int times){
        if(times==4){
            if(start==s.length()) res.push_back(t);
        }
        else{
            for(int i=1; i<=3 && start+i<=s.length(); ++i){
                string a = s.substr(start, i);
                if(i>1 && a[0]=='0') break;
                int b=stoi(a);
                if(b<256){
                    int sizeT = t.size();
                    t.append(a);
                    if(times!=3) t.append(".");
                    create(s, res, t, start+i, times+1);
                    t.erase(sizeT);
                }
            }
        }
    }
};