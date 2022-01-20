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
<h1>RECURSIVE SOLUTION </h1>
class Solution {
public:
    void check(vector<int> &ans,TreeNode* root){
       if(root==NULL) return;
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

<h1>ITERATIVE SOLUTION </h1>
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
       if(root==NULL) return ans;
      stack<TreeNode*> s;
      s.push(root);
      while(!s.empty()){
        struct TreeNode* topElement=s.top();
        ans.push_back(topElement->val);
        s.pop();
        if(topElement->right!=NULL){
          s.push(topElement->right);
        }
        if(topElement->left!=NULL){
          s.push(topElement->left);
        }
      }
      return ans;
    }
};
