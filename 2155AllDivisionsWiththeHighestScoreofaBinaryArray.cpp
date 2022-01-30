class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int size=nums.size();
        vector<int> countZeros(size);
        vector<int> countOnes(size);
        map<int,int> m;
        if(nums[0]==0){
          countZeros[0]=1;
          countOnes[0]=0;
        }
       else{
         countZeros[0]=0;
         countOnes[0]=1;
       }
        for(int i=1;i<size;++i){
          if(nums[i]==0){
              countZeros[i]=countZeros[i-1]+1;
              countOnes[i]=countOnes[i-1];
          }
          else{
             countOnes[i]=countOnes[i-1]+1;
             countZeros[i]=countZeros[i-1];
          }
        }
        int maxi=INT_MIN;
        for(int i=0;i<=size;i++){
          int sum=0;
          if(i==0){
            sum=countOnes[size-1];
          }
          else if(i==size){
            sum=countZeros[size-1];
          }
          else{
            sum+=countZeros[i-1]+(countOnes[size-1]-countOnes[i-1]);
          }
          if(sum>maxi) maxi=sum;
          m[i]=sum;
        }
       vector<int> ans;
       for(int i=0;i<m.size();i++){
         if(m[i]==maxi){
           ans.push_back(i);
         }
       }
      return ans;
    }
};
