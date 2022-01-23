class Solution {
public:
    int number(vector<int> &temp){
      int ans=0;
      for(int i=0;i<temp.size();++i){
        ans=ans*10+temp[i];
        
      }
     // cout<<ans<<endl;
      return ans;
    }
    vector<int> sequentialDigits(int low, int high) {
         vector<int> ans;
         vector<int> temp;
         int count=0,lowTemp=low;
         while(lowTemp>0){
           count++;
           lowTemp/=10;
         }
        
         for(int i=1;i<=count;i++){
            temp.push_back(i);
         }

         while(1){
          int check=number(temp);
          if(check>=low) break;
          if(temp[temp.size()-1]%10==9){
           for(int j=1;j<=temp.size();j++){
              temp[j-1]=j;
           }
            temp.push_back(temp.size()+1);
           }
           else{
           for(int j=0;j<temp.size();j++){
             ++temp[j];
           }
           }
           
         }          
         while(1){
           int check=number(temp);
        
           if(check<=high){
             ans.push_back(check);
           }
           else break;
           if(ans[ans.size()-1]%10==9){
    
           for(int j=1;j<=temp.size();j++){
              temp[j-1]=j;
           }
            temp.push_back(temp.size()+1);
           }
           else{
           for(int j=0;j<temp.size();j++){
             ++temp[j];
           }
           }
         }
         
       return ans;
    }
};
