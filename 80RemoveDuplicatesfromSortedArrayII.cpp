class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int count=0;
        for(int i=0;i<nums.size()-1;++i){
          if(nums[i]==nums[i+1]){
            count++;
          
            if(count==2){
              
               count=0;
               int j=i+1;
               while(j<nums.size()){
                 nums[j-1]=nums[j];
                 j++;
               }
              i-=2;
              nums.pop_back();
            }
          }
          else{
            count=0;
          }
        }
      return nums.size();
    }
};
