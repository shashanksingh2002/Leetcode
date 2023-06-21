//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void fn(vector<vector<int>>&m,string temp,int i,int j,int n,vector<string> &ans,vector<vector<int>> &vis){
        if(i==n-1 && j==n-1 && m[i][j]==1){
            ans.push_back(temp);
            return;
        }
        if(i>=n || j>=n || i<0 || j<0) return;
        if(!m[i][j]) return;
        if(vis[i][j]) return; 
        vis[i][j]=1;
        fn(m,temp+'U',i-1,j,n,ans,vis);
        fn(m,temp+'L',i,j-1,n,ans,vis);
        fn(m,temp+'D',i+1,j,n,ans,vis);
        fn(m,temp+'R',i,j+1,n,ans,vis);
        vis[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        string temp="";
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int>(n));
        fn(m,temp,0,0,n,ans,vis);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends