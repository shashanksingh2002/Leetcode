// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int bSearch(int st,int end){
      int mini=INT_MAX;
      while(st<=end){
        int mid=st+(end-st)/2;
        if(mid>=mini) return mini;
        if(isBadVersion(mid)){
          mini=min(mini,mid);
          end=mid-1;
        }
        else{
          
          st=mid+1;
        }
      }
      return mini;
    }
    int firstBadVersion(int n) {
      if(n==1) return 1;
      return bSearch(1,n);
    }
};
