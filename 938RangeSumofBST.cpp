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
    int rangeSumBST(TreeNode* root, int low, int high){
        if(root==NULL) return 0;
       int sum=0;
       int ans1= rangeSumBST(root->left,low,high);
        if(root->val>=low&&root->val<=high) {
           sum+=root->val;
        }
      int ans2=rangeSumBST(root->right,low,high);
        return ans1+ans2+sum;
    }
};
