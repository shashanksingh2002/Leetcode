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
    int len(ListNode* head){
      if(head==NULL) return 0;
       return 1+len(head->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        int size=len(head);
        if(size-n==0) return head->next;
        ListNode* newhead=head;
        int count=1;
        while(head!=NULL){
           if(count==size-n){
              head->next=head->next->next;
           }
          count++;
          head=head->next;
        }
        
       return newhead;
        
    }
};
