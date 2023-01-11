//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int lower_bound(vector<vector<int>> &arr,int i,int m){
        int st = 0,end = m-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(arr[i][mid]==1 && mid==0 || arr[i][mid]==1 && mid>0 && arr[i][mid-1]==0){
                return mid;
            }
            else if(arr[i][mid]==1) end=mid-1;
            else st = mid+1;
        }
        return -1;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int maxi=0,idx=-1;
	    for(int i=0;i<n;i++){
	        int stIdx = lower_bound(arr,i,m);
	        if(stIdx != -1){
	            if(maxi<m-stIdx){
	                maxi = m-stIdx;
	                idx = i;
	            }
	        }
	    }
	    return idx;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends