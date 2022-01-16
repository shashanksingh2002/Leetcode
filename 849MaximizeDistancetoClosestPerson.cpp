class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        bool check=false;
        int n=seats.size();
        int maxi=1,count=0,idx=-1;
        int ptr1,ptr2;
        for(int i=0;i<n;++i){
           if(seats[i]==1){
             if(check==false){
               check=true;
               maxi=i;
             }
             count++;
             idx=i;
             int j=i+1;
             while(j<n&&seats[j]!=1){
               ++j;
             }
             int mid=(i+j)/2;
             int temp=min(mid-i,j-mid);
             maxi=max(maxi,temp);
             
           }
        }
      if(count==1){
         maxi=max(idx,n-idx-1);
      }
      maxi=max(maxi,n-idx-1);
      
      return maxi;
    }
};
