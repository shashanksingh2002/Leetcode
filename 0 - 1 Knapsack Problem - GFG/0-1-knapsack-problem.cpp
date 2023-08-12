//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int helper(int wt[],int val[],int n,int w,vector<vector<int>> &dp){
        if(n==0){
            return (wt[0]<=w)?val[0]:0;   
        }
        if(dp[n][w] != -1) return dp[n][w];
        
        int rr = helper(wt,val,n-1,w,dp);
        int lr = 0;
        if(wt[n]<=w){
            lr = val[n]+helper(wt,val,n-1,w-wt[n],dp);
        }
        return dp[n][w] = max(lr,rr);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(n,vector<int>(W+1,-1));
        return helper(wt,val,n-1,W,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends