/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        stack<Node*> store;
        store.push(root);
        while(store.size()!=0){
            Node* temp = store.top();
            ans.push_back(temp->val);
            store.pop();
            for(int i=temp->children.size()-1;i>=0;i--){
                store.push(temp->children[i]);
            }
        }
        return ans;
    }
};
