//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void helper(vector<vector<int>> &grid,vector<vector<int>> &vis,int i,int j,int &count,vector<int> &temp){
        if(i<0||j<0||i==grid.size() || j==grid[i].size() || vis[i][j] || !grid[i][j]){
            temp.push_back(-1);
            return;
        } 
        
        vis[i][j] = 1;
        temp.push_back(++count);
        
        helper(grid,vis,i+1,j,count,temp);
        helper(grid,vis,i-1,j,count,temp);
        helper(grid,vis,i,j+1,count,temp);
        helper(grid,vis,i,j-1,count,temp);
        
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size()));
        set<vector<int>> s;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(!vis[i][j] && grid[i][j]){
                    int count = 0;
                    vector<int> temp;
                    helper(grid,vis,i,j,count,temp);
                    if(temp.size()>0) s.insert(temp);
                }
            }
        }
        return s.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends