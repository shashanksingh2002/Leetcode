//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     int i=0,j=0;
     while(i<s.length() && j<x.length()){
         int k=i;
        while(k<s.length() && j<x.length() && s[k]==x[j]){
            k++,j++;
            if(j==x.length()) return i;
        }
        j=0;
        i++;
     }
     return -1;
     
}