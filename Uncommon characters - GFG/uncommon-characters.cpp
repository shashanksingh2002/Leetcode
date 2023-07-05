//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            string ans = "";
            int hash1[127]={0};
            int hash2[127]={0};
            for(int i=0;i<A.length();i++){
                hash1[A[i]]++;
            }
            
            for(int i=0;i<B.length();i++){
                hash2[B[i]]++;
            }
            
            for(int i=0;i<127;i++){
                if(hash1[i] && !hash2[i] || !hash1[i] && hash2[i]){
                    char ch = i;
                    ans += ch;
                }
            }
            return (!ans.length())?"-1":ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends