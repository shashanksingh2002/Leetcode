//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(long long st,long long mid,long long end,long long arr[],long long &count){
    long long temp[end-st+1];
    long long i=st,j=mid+1,k=0;
    
    while(i<=mid && j<=end){
        if(arr[i]>arr[j]){
            count += (mid-i+1);
            j++;
        }
        else{
            i++;
        }
    }
    i=st,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=end){
        temp[k]=arr[j];
        k++;
        j++;
    }
    for(int l=st,k=0;l<=end;l++,k++){
        arr[l] = temp[k];
       // cout<<arr[l]<<" ";
    }
   
}
    void mergeSort(long long st,long long end,long long arr[],long long &count){
    if(st<end){
        long long mid = st+(end-st)/2;
        mergeSort(st,mid,arr,count);
        mergeSort(mid+1,end,arr,count);
        merge(st,mid,end,arr,count);
    }
}
    long long int inversionCount(long long arr[], long long N)
    {
        long long count = 0;
        mergeSort((long long)0,(long long)N-1,arr,count);
        return count;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends