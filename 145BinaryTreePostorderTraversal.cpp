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
RECURSIVE
class Solution {
public:
  
     vector<int> ans;
    vector<int> postorderTraversal(TreeNode* root) {
       
      if(root==NULL) return ans;
      postorderTraversal(root->left);
      postorderTraversal(root->right);
      ans.push_back(root->val);
        
      return ans;
    }
};

2 STACK APPROACH

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        st1.push(root);
        /*
           *Take the top element from st1 and store it in st2
           *If that top element has a left store it in st1
           *If it has a right store it in st1
           *after st1 becomes empty print st2
        */
        while(!st1.empty()){
            TreeNode* temp = st1.top();
            st1.pop();
            st2.push(temp);
            if(temp->left!=NULL) st1.push(temp->left);
            if(temp->right!=NULL) st1.push(temp->right);
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
    }
};
