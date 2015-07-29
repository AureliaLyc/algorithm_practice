
// #include<cstdio>
// //Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//     void show(){
//       printf("%d", val);
//       if (next)
//       {
//         printf("->");
//         next->show();
//       }
//       else{
//         printf("\n");
//       }
//     }
// };

class Solution {
public:
    void deleteNode(ListNode* node) {
      if (node->next)
      {
        ListNode* nextNode = node->next;
        node->val = nextNode->val;
        node->next = nextNode->next;
        //delete nextNode;
      }
    }
};

int main(){
  ListNode aNode(1);
  ListNode bNode(2);
  ListNode cNode(3);
  ListNode dNode(4);
  aNode.next = &bNode;
  bNode.next = &cNode;
  cNode.next = &dNode;
  aNode.show();
  Solution sol;
  sol.deleteNode(&dNode);
  aNode.show();
  return 0;
}