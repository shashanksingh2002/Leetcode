class Solution {
public:
    void sortColors(vector<int>& nums) {
       int start=0;
       int end=nums.size()-1;
       int mid=0;
       while(mid<=end){
         if(nums[mid]==0){
           std::swap(nums[start],nums[mid]);
           start++;
           mid++;
         }
         else if(nums[mid]==1){
           mid++;
         }
         else if(nums[mid]==2){
           std::swap(nums[mid],nums[end]);
           end--;
         }
       }
         
    }
};
            
            
