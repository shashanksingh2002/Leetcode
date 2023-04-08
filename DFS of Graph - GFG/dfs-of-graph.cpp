//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void helper(int v, vector<int> adj[],vector<int> &ans,int idx,vector<int> &vis){
        for(int i=0;i<adj[idx].size();i++){
            if(!vis[adj[idx][i]]){
                if(!vis[0]){
                    vis[idx] = 1;
                    ans.push_back(0);
                }
                ans.push_back(adj[idx][i]);
                vis[adj[idx][i]] = 1;
                helper(v,adj,ans,adj[idx][i],vis);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> visited(V+1);
        helper(V,adj,ans,0,visited);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends