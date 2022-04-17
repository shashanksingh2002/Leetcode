class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        
       for(int i=1;i<=numRows;i++){
         vector<int>a;
         for(int j=0;j<i;j++){
           if(j==0||j==i-1){
             a.push_back(1);
           }
           else{
             a.push_back(ans[i-2][j]+ans[i-2][j-1]);
           }
         }
         ans.push_back(a);
       }
      return ans;
    }
};
