class Solution {
public:
    bool isHappy(int n) {
        map<int,int> m;
        while(n!=1){
          int sum=0;
          while(n>0){
            sum+=pow(n%10,2);
            n/=10;
          }
          n=sum;
          if(m.find(sum)!=m.end()){
             return false;
          }
          m[sum]++;
        }
     return true;
    }
};
