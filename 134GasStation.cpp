class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0,end=gas.size()-1,sum=0,count=0,ans=0,i=0;
      
        while(i<(gas.size()*2)-1){
           sum+=gas[start];
           if(sum-cost[start]<0){
             sum=0;
             count=0;
             start++;
             ans=start;
             end=++end%gas.size();
             
           }
           else{
             sum-=cost[start];
             count++;
             start++;
           }
          ++i;
           if(start==gas.size()) start=0;
           if(count==gas.size()){
             return ans;
           }
        }
      return -1;
    }
};
