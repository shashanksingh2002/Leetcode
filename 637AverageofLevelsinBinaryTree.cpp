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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root==NULL) return ans;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
          double avg=0;
          stack <TreeNode*> temp;
          while(!s.empty()){
             temp.push(s.top());
             s.pop();
             avg+=(double)temp.top()->val;
             
          }
          avg/=(double)temp.size();
          ans.push_back(avg);
          while(!temp.empty()){
            if(temp.top()->left!=NULL){
              s.push(temp.top()->left);
            }
            if(temp.top()->right!=NULL){
              s.push(temp.top()->right);
            }
            temp.pop();
          }
          
          
        }
      return ans;
    }
};
