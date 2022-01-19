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
    vector<int> bfs(queue<TreeNode*> &q){
       vector<int> ans;
       int size=q.size();
       int j=0;
       while(j<size){
       struct TreeNode* temp=q.front();
         if(temp->left!=NULL){
           q.push(temp->left);
         }
         if(temp->right!=NULL){
           q.push(temp->right);
         }
         ans.push_back(temp->val);
         q.pop();
         j++;
       }
       
       return ans;
       
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> ans;
       if(root==NULL) return ans;
       queue<TreeNode*> q;
       
       q.push(root);
       while(!q.empty()){
         vector<int> temp=bfs(q);
         ans.push_back(temp);
       }
       return ans;
    }
};
