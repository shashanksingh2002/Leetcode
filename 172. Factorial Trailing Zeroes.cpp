class Solution {
public:
    int trailingZeroes(int n) {
        int count=5,i=1,ans=0;
        while(pow(count,i)<=n){
          ans=ans+(n/(pow(count,i)));
          i++;
        }
       return ans; 
    }
};
