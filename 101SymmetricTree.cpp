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
    bool dfs(TreeNode* root1,TreeNode* root2){
      if(root1==NULL&&root2==NULL) return true;
      if(root1==NULL) return false;
      if(root2==NULL) return false;
      if(root1->val!=root2->val) return false;
      bool ans1=dfs(root1->left,root2->right);
      if(ans1==false) return false;
      bool ans2=dfs(root1->right,root2->left);
      if(ans2==false) return false;
      
      return true;
    }
    bool isSymmetric(TreeNode* root) {
        return dfs(root,root);
    }
};
