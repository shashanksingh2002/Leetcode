class Solution {
public:
    int count(int i){
      int cnt=0;
      while(i){
        if((i&1)>0) cnt++;
        i=i>>1;
      }
      return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;++i){
          ans[i]=count(i);
        }
        return ans;
    }
};
