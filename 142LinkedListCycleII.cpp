/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> s;
        int count=0;
        while(head!=NULL){
          s.insert(head);
          count++;
          if(s.size()!=count) return head;
           head=head->next;
        }
      return NULL;
    }
};
