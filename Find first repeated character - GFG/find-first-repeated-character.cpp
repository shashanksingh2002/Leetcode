//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    int hash[26]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-97]++;
        if(hash[s[i]-97]==2){
            string ans = "";
            ans += s[i];
            return ans;
        }
    } 
    return "-1";
}