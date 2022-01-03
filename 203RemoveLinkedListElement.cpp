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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL||head->next==NULL&&head->val==val) return NULL;
        if(head->next==NULL&&head->val!=val) return head;
        bool first=false;
        ListNode* newhead=head;
        ListNode* prev=head;
        while(head!=NULL){
           if(first==false&&head->val==val){
             head=head->next;
             prev->next=NULL;
             prev=head;
             newhead=head;
           }
          else if(head->next!=NULL&&head->next->val==val){
            first=true;
            prev=head->next;
            head->next=head->next->next;
            prev->next=NULL;
          }
          else{
            first=true;
            head=head->next;
          }
        }
      return newhead;
    }
};
