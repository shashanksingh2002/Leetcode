//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool helper(vector<int> &arr,int n,int k,vector<vector<int>> &dp){
        if(k == 0) return true;
        if(n<0) return false;
        if(dp[n][k] != -1) return dp[n][k];
        bool lr = helper(arr,n-1,k,dp);
        bool rr = false;
        if(arr[n]<=k)
            rr = helper(arr,n-1,k-arr[n],dp);
        return dp[n][k] = lr||rr;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        vector<vector<int>> dp(arr.size(),vector<int>(sum+1,-1));
        return helper(arr,arr.size()-1,sum,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends