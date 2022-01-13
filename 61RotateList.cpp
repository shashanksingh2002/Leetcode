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
    int size(ListNode* head){
      if(head==NULL) return 0;
      return 1+size(head->next);
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL) return head;
        int length=size(head);
        int rotate=k%length;
        if(rotate==0) return head;
        int limit=length-rotate;
        int count=1;
        ListNode* temphead=head;
        while(count<limit){
          
          temphead=temphead->next;
          count++;
        }
      cout<<temphead->val;
      ListNode* newhead=temphead->next;
      temphead->next=NULL;
      ListNode* temp=newhead;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=head;
        
      return newhead;
        
    }
};
