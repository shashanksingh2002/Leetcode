//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int numProvinces(vector<vector<int>> mat, int V) {
        vector<int> vis(V+1);
        vector<vector<int>> adj(V+1);
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1 && i!=j){
                    adj[i+1].push_back(j+1);
                }
            }
        }
        int ans = 0;
        for(int i=1;i<vis.size();i++){
            if(!vis[i]){
                ans++;
                queue<int> q;
                q.push(i);
                vis[i] = 1;
                while(!q.empty()){
                    int ele = q.front();
                    q.pop();
                    for(int j=0;j<adj[ele].size();j++){
                         if(!vis[adj[ele][j]]){
                             q.push(adj[ele][j]);
                             vis[adj[ele][j]] = 1;
                         }
                    }
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends