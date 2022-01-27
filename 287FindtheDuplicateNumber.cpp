class Solution {
public:
    
    int findDuplicate(vector<int>& nums) {
        int size=nums.size();
        vector<int> hash(size,0);
       
        for(int i=0;i<size;i++){
          if(hash[nums[i]]==1) return nums[i];
          else hash[nums[i]]++;
        }
        
        return -1;
    }
};
