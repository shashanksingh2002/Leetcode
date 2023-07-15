//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool h(int src,vector<int> adj[],vector<int> &vis){
        queue<pair<int,int>> q;
        q.push({src,-1});
       
        vis[src]=1;
        while(!q.empty()){
            int val = q.front().first;
            for(int i=0;i<adj[val].size();i++){
                if(!vis[adj[val][i]]){
                    vis[adj[val][i]]=1;
                    q.push({adj[val][i],val});
                }
                else if(q.front().second != adj[val][i]) return true;
            }
            q.pop();
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V);
        for(int i=0;i<V;i++)
            if(!vis[i])
                if(h(i,adj,vis)) return true;
        
        return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends