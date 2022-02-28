class Solution {
public:
    int countOdds(int low, int high) {
      if(low==high&&low%2==0&&high%2==0) return 0;
      if(low==high) return 1;
      
      int count=2;
        if(low%2==0 && high%2==0) {
          count=0;
          return (high-low)/2;
        }
       else if(low%2==0 || high%2==0)   count=1;
      count+=(high-low-1)/2;
      return count;
    }
};
