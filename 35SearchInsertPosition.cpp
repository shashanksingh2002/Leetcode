class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int i=0,j=nums.size()-1,mid,len=nums.size()-1;
       if(nums[0]>=target) return 0;
            if(nums[len]<target) return len+1;
            if(nums[len]==target) return len;

        while(i<j){
             mid = i+(j-i)/2;
            if(nums[mid]==target){
                return mid;
            }
           else if(mid>0&&nums[mid]>target&&nums[mid-1]<target){
                return mid;
            }
             else if(mid<nums.size()&&nums[mid]<target&&nums[mid+1]>target){
                return mid+1;
            }
            else if(nums[mid]<target){
                i++;
            }
            else{
                j--;
            }
        }
       return 0;
    }
};
