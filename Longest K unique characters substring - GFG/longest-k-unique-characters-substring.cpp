//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    int longestKSubstr(string s, int k) {
        int i=0,j=0,maxi=0,count=0;
        int arr[26]={0};
        while(j<s.length()){
            arr[s[j]-97]++;
            if(arr[s[j]-97]==1) count++;
            if(count==k) maxi = max(maxi,j-i+1);
            else if(count>k){
                while(i<j){
                    arr[s[i]-97]--;
                    i++;
                    if(arr[s[i-1]-97]==0) break;
                }
                //cout<<i<<endl;
                count--;
                maxi = max(maxi,j-i+1);
            }
            j++;
        }
        return (maxi == 0)?-1:maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends