class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> res;
        res.reserve(numCourses);
        vector<int> indegree(numCourses, 0);
        vector<vector<int> > p(numCourses, vector<int>());
        for(auto i : prerequisites){
            p[i.second].push_back(i.first);
            indegree[i.first]++;
        }
        queue<int> q;
        for(int i=0; i<numCourses; ++i){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int j=q.front();
            q.pop();
            res.push_back(j);
            for(auto i : p[j]){
                --indegree[i];
                if(indegree[i]==0) q.push(i);
            }
        }
        if(res.size()!=numCourses){
            res.clear();
        }
        return res;
    }
};