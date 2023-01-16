//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int pivot(int *arr,int n){
        int st = 0,end = n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(mid>0 && arr[mid]<arr[mid-1]) return mid;
            else if(mid<n-1 && arr[mid]>arr[mid+1]) return mid+1;
            else if(arr[st]<arr[mid]) st = mid+1;
            else end = mid-1;
        }
        return -1;
    }
	int findKRotation(int arr[], int n) {
	    return (arr[0]<arr[n-1]||n==1)?0:pivot(arr,n);
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends