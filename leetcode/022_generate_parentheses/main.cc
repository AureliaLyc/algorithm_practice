class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string f(2*n, ')');
        for(int i=0; i<n; ++i){
            f[i]='(';
        }
        res.push_back(f);
        moveRight(res, f, n, 0);
        return res;
    }

    void moveRight(vector<string>& res, string& s, int n, int from){
        if (n)
        {
            string f(s);
            for (int i = from; i < s.length()-2*n; ++i)
            {
                swap(f[i], f[i+n]);
                res.push_back(f);
                moveRight(res, f, n-1, i+2);
            }
        }

        for(int i=from+1, j=n-1; i<from+n; ++i, --j){
            swap(s[i], s[i+j]);
            res.push_back(s);
            moveRight(res, s, j, i+1);
            swap(s[i], s[i+j]);
        }
    }
};