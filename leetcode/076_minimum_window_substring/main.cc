class Solution {
public:
    string minWindow(string s, string t) {
        int sz=s.length();
        const int inf=-(sz+1);
        vector<int> tv(256, inf);
        int dt=0; // how many chars are not in window. number of positive cur.
        for(auto i:t){
            tv[i]=tv[i]==inf?1:tv[i]+1;
            dt+=(tv[i]==1);
        }
        vector<int> cur(256, 0);
        int l=0;
        while(l<sz && tv[s[l]]==inf) ++l; // find the first char in t.
        int tz=t.length();
        int r=l, lres=l, rres=l, end=sz-tz;
        while(l<=end && r<sz){
            for(;r<sz && dt; ++r){
                char c=s[r];
                cur[c]+=tv[c]>inf;
                dt-=(tv[c]==cur[c]);
            }
            for(;l<=end && !dt; ++l){
                char c=s[l];
                if(tv[c]==cur[c]){
                    if(rres-lres>r-l || rres==lres){
                        rres=r;
                        lres=l;
                    }
                    ++dt;
                }
                --cur[c];
            }
        }
        return s.substr(lres, rres-lres);
    }
};

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> map(128,0);
        int counter=t.size(), begin=0, end=0, d=INT_MAX, head=0;
        for(auto c: t) map[c]++;
        while(end<s.size()){
            if(map[s[end++]]-->0) counter--; //in t
            while(counter==0){ //valid
                if(end-begin<d) {
                    head=begin;
                    d=end-begin;
                }
                if(map[s[begin++]]++==0) counter++;  //make it invalid
            }

        }
        return d==INT_MAX? "":s.substr(head, d);
    }
};