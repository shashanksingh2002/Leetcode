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
    int check(ListNode* head1,ListNode** head2,int &maxi){
      if(head1->next==NULL){
        int sum=head1->val+ (*head2)->val;
        maxi=max(maxi,sum);
        *(head2)= (*head2)->next;
        return maxi;
      }
    int ans=check(head1->next,head2,maxi);
       int sum=head1->val+ (*head2)->val;
        maxi=max(ans,sum);
        *(head2)=(*head2)->next;
        return maxi;
      
    }
    int pairSum(ListNode* head) {
        int maxi=-1;
        int ans=check(head,&head,maxi);
        return ans;
    }
};
