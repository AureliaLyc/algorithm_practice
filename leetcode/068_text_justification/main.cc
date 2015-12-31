class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        int size=words.size();
        vector<int> spaces;
        int i=0;
        while(i<size){
            int j=i;
            int line=words[j++].length();
            while(j<size && line+1+words[j].length()<=maxWidth){
                line+=1+words[j++].length();
            }
            string t=words[i];
            t.reserve(maxWidth);
            if(j-i==1){
                for(int m=line; m<maxWidth; ++m){
                    t.push_back(' ');
                }
            }
            else if(j!=size){
                int diff=maxWidth-line+(j-i-1);
                int minSpace=diff/(j-i-1);
                int num=diff%(j-i-1);
                for(int m=i+1; m<j; ++m){
                    int space=minSpace;
                    if(num>0){
                        ++space;
                        --num;
                    }
                    for(int n=0; n<space; ++n){
                        t.push_back(' ');
                    }
                    t+=words[m];
                }
            }
            else{
                int diff=maxWidth-line;
                for(int m=i+1; m<j; ++m){
                    t.push_back(' ');
                    t+=words[m];
                }
                for(int m=0; m<diff; ++m){
                    t.push_back(' ');
                }
            }
            res.push_back(t);
            i=j;
        }
        return res;
    }
};

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        string tmp;
        tmp.reserve(maxWidth);
        for(int i = 0, k, l; i < words.size(); i += k) {
            for(k = l = 0; i + k < words.size() and l + words[i+k].size() <= maxWidth - k; k++) {
                l += words[i+k].size();
            }
            tmp = words[i];
            for(int j = 0; j < k - 1; j++) {
                if(i + k >= words.size())
                    tmp += " ";
                else
                    tmp += string((maxWidth - l) / (k - 1) + (j < (maxWidth - l) % (k - 1)), ' ');
                tmp += words[i+j+1];
            }
            tmp += string(maxWidth - tmp.size(), ' ');
            res.push_back(tmp);
        }
        return res;
    }
};