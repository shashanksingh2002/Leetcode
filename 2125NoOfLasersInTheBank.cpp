class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
      int count=0;
      int ans=0;
       vector<int> store(bank.size(),0);
        for(int i=0;i<bank.size();i++){
          count=0;
          for(int j=0;j<bank[i].size();j++){
             if(bank[i][j]=='1'){
               count++;
             }
          }
          store[i]=count;
        }
      
      int i=0;
      while(i<bank.size()-1){
         if(store[i]>0){
           int idx=i;
            ++i;
            while(i<bank.size()&&store[i]==0){
              i++;
            }
           if(i<bank.size())
           ans+=store[idx]*store[i];
         }
        else i++;
      }
      return ans;
    }
};
