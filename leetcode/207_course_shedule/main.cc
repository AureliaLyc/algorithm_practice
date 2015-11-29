class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<vector<int> > p(numCourses);
        for(auto r : prerequisites){
            p[r.first].push_back(r.second);
        }
        bool res=true;
        unordered_set<int> s;
        vector<bool> visiting(numCourses, true);
        for(int i=0; i<numCourses && res; ++i){
            if(visiting[i]){
                res = dfs(visiting, s, p, i);
            }
        }
        return res;
    }
    bool dfs(vector<bool>& visiting, unordered_set<int>& s, vector<vector<int> >& p, int i){
        if(s.find(i) == s.end()){
            if(visiting[i]){
                visiting[i]=false;
                s.insert(i);
                for(auto q : p[i]){
                    if(!dfs(visiting, s, p, q)) return false;
                }
                s.erase(i);
            }
            return true;
        }
        return false;
    }
};

class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<vector<int> > p(numCourses);
        vector<int> indegree(numCourses, 0);
        for(auto q : prerequisites){
            p[q.first].push_back(q.second);
            ++indegree[q.second];
        }
        queue<int> qindegree;
        for(int i=0; i<numCourses; ++i){
            if(indegree[i]==0) qindegree.push(i);
        }
        int count=qindegree.size();
        while(!qindegree.empty()){
            int vertex=qindegree.front();
            qindegree.pop();
            for(int i : p[vertex]){
                --indegree[i];
                if(indegree[i]==0) {
                    qindegree.push(i);
                    ++count;
                }
            }
        }
        return count == numCourses;
    }
};