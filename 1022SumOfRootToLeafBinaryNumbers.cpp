/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum=0;
    int convert(string s){
       int j=s.length()-1;
       int sum=0;
       int count=0;
       while(j>=0){
         if(s[j]=='1'){
           sum+=pow(2,count);
         }
         count++;
         j--;
       }
      return sum;
    }
    void check(TreeNode* root,string store){
       if(root==NULL) return;
       store+=(root->val)+48;
       if(root->left==NULL&&root->right==NULL){
          sum+=convert(store);
          return;
       } 
       check(root->left,store);
       
       check(root->right,store);

       return;
       
    }
    int sumRootToLeaf(TreeNode* root) {
       if(root==NULL) return 0;
       string store="";
       check(root,store);
       return sum;
    }
};
