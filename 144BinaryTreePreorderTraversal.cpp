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
    void check(vector<int> &ans,TreeNode* root){
       if(root==NULL) return;
      
       if(root->left==NULL){
         ans.push_back(root->val);
         check(ans,root->right);
         return;
       }
       if(root->right==NULL){
         ans.push_back(root->val);
         check(ans,root->left);
         return;
       }
       ans.push_back(root->val);
       check(ans,root->left);
       check(ans,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
       if(root==NULL) return ans;
        check(ans,root);
      return ans;
    }
};
