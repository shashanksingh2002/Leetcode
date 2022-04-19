class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX,maxi=INT_MIN,idxMini=-1,idxMaxi=-1;
        for(int i=0;i<nums.size();i++){
          if(nums[i]<mini){
            mini=nums[i];
            idxMini=i;
          }
          if(nums[i]>maxi){
            maxi=nums[i];
            idxMaxi=i;
          }
        }
       int minimum = min(idxMini,idxMaxi);
       int maximum = max(idxMini,idxMaxi);
       int variable = min(nums.size()-minimum,minimum+1+nums.size()-maximum);
       return min(maximum+1,variable);
    }
};
