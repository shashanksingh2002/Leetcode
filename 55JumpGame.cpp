
//Memoization Approach
class Solution {
public:
    bool f(vector<int> &arr,int i,vector<int> &dp){
        if(i==arr.size()) return false;
        if(i==arr.size()-1) return true;
        if(arr[i] == 0) return false;
        if(dp[i] != 2) return dp[i];
        for(int j=1;j<=arr[i];j++){
            if(f(arr,i+j,dp)) return dp[i] = 1;
        }
        return dp[i] = 0;
    }
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        vector<int> dp(nums.size(),2);
        return f(nums,0,dp);
    }
};
