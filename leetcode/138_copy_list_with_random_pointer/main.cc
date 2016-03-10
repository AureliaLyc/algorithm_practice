class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        unordered_map<RandomListNode*, pair<RandomListNode*, RandomListNode*>> um;
        RandomListNode* p=head;
        RandomListNode* prev=nullptr;
        for(;p; p=p->next){
            RandomListNode* n=new RandomListNode(p->label);
            if(prev) prev->next=n;
            prev=n;
            um[p]=make_pair(p->random, n);
        }
        RandomListNode* res=um[head].second;
        for(auto i:um){
            i.second.second->random=um[i.second.first].second.second;
        }
        return res;
    }
};

class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head) return nullptr;
        RandomListNode* p=head;
        while(p){
            RandomListNode* n=p->next;
            p->next=new RandomListNode(p->label);
            p->next->next=n;
            p=n;
        }
        p=head;
        while(p){
            p->next->random=p->random?p->random->next:nullptr;
            p=p->next->next;
        }
        p=head;
        RandomListNode* res=head->next;
        while(p){
            RandomListNode* n=p->next;
            p->next=n->next;
            n->next=p->next?p->next->next:nullptr;
            p=p->next;
        }
        return res;
    }
};