class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
             int j=i+1;
             while(j<nums.size()&&nums[j]==0){
               j++;
             }
             if(j<nums.size())
             std::swap(nums[i],nums[j]);
             else break;
           }
        }
    }
};
