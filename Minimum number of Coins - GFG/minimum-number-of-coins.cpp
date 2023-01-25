//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void helper(int &n,vector<int> &ans,int x){
        while(n>0 && n/x>0){
            ans.push_back(x);
            n-=x;
        }
    }
    vector<int> minPartition(int n)
    {
        vector<int> ans;
        helper(n,ans,2000);
        helper(n,ans,500);
        helper(n,ans,200);
        helper(n,ans,100);
        helper(n,ans,50);
        helper(n,ans,20);
        helper(n,ans,10);
        helper(n,ans,5);
        helper(n,ans,2);
        helper(n,ans,1);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends