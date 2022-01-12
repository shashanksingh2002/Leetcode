class Solution {
public:
    void reverse(int st,int end,vector<int> &nums){
       while(st<end){
         std::swap(nums[st],nums[end]);
         st++;
         end--;
       }
    }
    void rotate(vector<int>& nums, int k) {
        
        int rotate=k%nums.size();
        if(rotate==0) return;
        reverse(0,nums.size()-rotate-1,nums);
        reverse(nums.size()-rotate,nums.size()-1,nums);
        reverse(0,nums.size()-1,nums);
                
    }
};
