//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int LowerBound(int arr[],int n,int x){
	    int st = 0,end = n-1;
	    while(st<=end){
	        int mid = st+(end-st)/2;
	        if(arr[mid] == x && mid>0 && arr[mid-1]<x || arr[mid] == x && mid == 0) return mid;
	        else if(arr[mid]>=x) end = mid-1;
	        else st = mid+1;
	    }
	    return -1;
	}
	int UpperBound(int arr[],int n,int x){
	    int st = 0,end = n-1;
	    while(st<=end){
	        int mid = st+(end-st)/2;
	        if(arr[mid] == x && mid<n-1 && arr[mid+1]>x || arr[mid] == x && mid == n-1) return mid;
	        else if(arr[mid]>x) end = mid-1;
	        else st = mid+1;
	    }
	    return -1;
	}
	int count(int arr[], int n, int x) {
	    int lower_bound = LowerBound(arr,n,x);
	    if(lower_bound == -1) return 0;
	    int upper_bound = UpperBound(arr,n,x);
	    return upper_bound - lower_bound + 1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends