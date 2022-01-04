/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode *temp=NULL;
      ListNode *prev=head;
      while(head!=NULL){
         
         
           head=head->next;
           prev->next=temp;
           temp=prev;
           prev=head;
         
         
      }
      return temp;
       
    }
};
