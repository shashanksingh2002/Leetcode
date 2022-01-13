class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int start=0,end=numbers.size()-1;
        while(start<end){
          int sum=numbers[start]+numbers[end];
          if(sum==target){
            ans[0]=start+1;
            ans[1]=end+1;
            break;
          }
          else if(sum<target){
            start++;
          }
          else{
            end--;
          }
        }
      return ans;
    }
};
