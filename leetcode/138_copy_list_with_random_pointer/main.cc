#include <unordered_map>
//#include <utility>
using namespace std;
struct RandomListNode {
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

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

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}{-1,8,7,-3,4,4,-3,#,#,-1}