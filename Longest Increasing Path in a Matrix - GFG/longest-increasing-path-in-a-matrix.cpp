//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   int helper(vector<vector<int>> &mat,int n,int m, int last,vector<vector<int>> &dp){
        if(n<0 || m<0 || n==mat.size() || m == mat[n].size()) return 0;
        if(mat[n][m]<=last) return 0;
        if(dp[n][m] != -1) return dp[n][m];
        int lr = helper(mat,n,m-1,mat[n][m],dp);
        int rr = helper(mat,n,m+1,mat[n][m],dp);
        int ur = helper(mat,n-1,m,mat[n][m],dp);
        int dr = helper(mat,n+1,m,mat[n][m],dp);
        return dp[n][m] = 1+max(lr,max(rr,max(ur,dr)));
    }
    int longestIncreasingPath(vector<vector<int>>& matrix, int n, int m) {
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),-1));
         int maxi = 0,last = -1;
         for(int i=0;i<matrix.size();i++){
             for(int j=0;j<matrix[i].size();j++){
                    maxi = max(maxi,helper(matrix,i,j,last,dp));
             }
         }
         return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        cout << obj.longestIncreasingPath(matrix, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends