//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string s)
{
    int hash[26] = {0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-97]++;
    }
    int c = 0;
    for(int i=0;i<26;i++){
        if(hash[i]%2 != 0) c++;
    }
    return (c<=1);
}