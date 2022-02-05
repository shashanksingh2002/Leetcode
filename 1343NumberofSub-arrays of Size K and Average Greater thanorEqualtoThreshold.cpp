class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0;
        int sum=0;
        int i=0,j=0;
        while(i<k){
          sum+=arr[i];
          i++;
        }
        if(sum/k>=threshold) count++;
        while(j<arr.size()-k){
          sum-=arr[j];
          sum+=arr[i];
          if(sum/k>=threshold) count++;
          i++;
          j++;
        }
      return count;
    }
};
