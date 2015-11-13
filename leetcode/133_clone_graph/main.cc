/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        UndirectedGraphNode* res=nullptr;
        if(node){
            res=new UndirectedGraphNode(node->label);
            unordered_map<int, UndirectedGraphNode*> pool;
            pool[node->label]=res;
            queue<UndirectedGraphNode*> q;
            q.push(node);
            while(!q.empty()){
                UndirectedGraphNode*nd=q.front();   q.pop();
                UndirectedGraphNode*cnd=pool[nd->label];
                cnd->neighbors.reserve(nd->neighbors.size());
                for(auto d : nd->neighbors){
                    auto it=pool.find(d->label);
                    UndirectedGraphNode* ad=nullptr;
                    if(it==pool.end()){
                        ad=new UndirectedGraphNode(d->label);
                        pool[d->label]=ad;
                        q.push(d);
                    }
                    else{
                        ad=it->second;
                    }
                    cnd->neighbors.push_back(ad);
                }
            }
        }
        return res;
    }
};