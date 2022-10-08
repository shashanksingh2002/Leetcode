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

Recursive Solution
class Solution {
public:
    void check(vector<int> &ans,TreeNode* root){
        if(root==NULL) return;
        check(ans,root->left);
        ans.push_back(root->val);
        check(ans,root->right);
     }
  
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
         check(ans,root);
      return ans;
    }
};


Iterative Solution
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode*> st;
        st.push(root);
        bool flag = false;
        while(!st.empty()){
            TreeNode* temp = st.top();
            if(!flag){
                while(temp->left!=NULL){
                st.push(temp->left);
                temp = temp->left;
                }
                ans.push_back(temp->val);
                st.pop();
                if(temp->right!=NULL){
                    st.push(temp->right);
                }
                else{
                    flag = true;
                }
            }
            else{
                TreeNode* temp = st.top();
                ans.push_back(temp->val);
                if(temp->right!=NULL){
                    st.pop();
                    st.push(temp->right);
                    flag = false;
                }
                else{
                    st.pop();
                }
            }
            
        }
        return ans;
    }
};
