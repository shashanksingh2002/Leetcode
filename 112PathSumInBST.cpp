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
   bool check(TreeNode* root,int key,int sum){
     if(root==NULL) return false;
     sum+=root->val;
     if(sum==key&&root->left==NULL&&root->right==NULL) return true;
     int ans1=check(root->left,key,sum);
     if(ans1==true) return true;
     int ans2=check(root->right,key,sum);
     if(ans2==true) return true;
     return false;
   }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        return check(root,targetSum,0);
    }
};
