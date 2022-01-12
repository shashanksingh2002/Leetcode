class Solution {
public:
    vector<int> bSearch(vector<int>&nums){
      vector<int> ans(2);
      int st=0;
      int end=nums.size()-1;
      while(st<=end){
        int mid=st+(end-st)/2;
        if(mid-1>=0&&nums[mid]>=0&&nums[mid-1]<0){
          ans[0]=mid-1;
          ans[1]=mid;
          return ans;
        }
        else if(mid+1<nums.size()&&nums[mid]<0&&nums[mid+1]>=0){
          ans[0]=mid;
          ans[1]=mid+1;
          return ans;
        }
        else if(nums[mid]<0){
          st=mid+1;
        }
        else{
          end=mid-1;
        }
      }
      return ans;
    }
    vector<int> sortedSquares(vector<int>& nums) {
       if(nums.size()==1){
         nums[0]*=nums[0];
         return nums;
       }

       if(nums[0]>=0){
         for(int i=0;i<nums.size();++i){
           nums[i]*=nums[i];
         }
         
         return nums;
       }
       if(nums[nums.size()-1]<0){
         int i=0;
         int j=nums.size()-1;
         while(i<=j){
           if(i==j) nums[i]*=nums[i];
           else{
           nums[i]*=nums[i];
           nums[j]*=nums[j];
           std::swap(nums[i],nums[j]);
           }
           ++i;
           --j;
         }
         return nums;
       }
       vector<int> idx=bSearch(nums);
       int st1=idx[0];
       int st2=idx[1];
       vector<int> ans;
       while(st1>=0&&st2<=nums.size()-1){
         int sq1=nums[st1]*nums[st1];
         int sq2=nums[st2]*nums[st2];
         if(sq2==sq1){
           ans.push_back(sq1);
           ans.push_back(sq2);
           st1--;
           st2++;
         }
         else if(sq1<sq2){
           ans.push_back(sq1);
           st1--;
         }
         else{
           ans.push_back(sq2);
           st2++;
         }
       }
      while(st1>=0){
        ans.push_back(nums[st1]*nums[st1]);
        st1--;
      }
      while(st2<=nums.size()-1){
        ans.push_back(nums[st2]*nums[st2]);
        st2++;
      }
      return ans;
    }
};



