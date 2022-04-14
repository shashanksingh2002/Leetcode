class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n));
        int row_st=0,col_st=0,row_end=n-1,col_end=n-1,data=1;
        while(row_st<=row_end&&col_st<=col_end){
          for(int i=row_st;i<=col_end;i++){
             arr[col_st][i]=data++;
          }
          col_st++;
          for(int i=col_st;i<=row_end;i++){
            arr[i][col_end]=data++;
          }
          col_end--;
          for(int i=col_end;i>=row_st;i--){
            arr[row_end][i]=data++;
          }
          row_end--;
          for(int i=row_end;i>=col_st;i--){
            arr[i][row_st]=data++;
          }
          row_st++;
        }
      return arr;
    }
};
