class Solution {
public:
  bool check(vector<vector<char>>& board,int i,int r,int j,int c){
    vector<int> v(9,0);
    int k=j;
    while(i<=c){
      j=k;
      while(j<=r){
        if(board[i][j]!='.'){
          v[board[i][j]-49]++;
          if(v[board[i][j]-49]>1) return false;
        }
        j++;
      }
      i++;
    }
    return true;
  }
    bool isValidSudoku(vector<vector<char>>& board) {
         
        
        for(int i=0;i<9;i++){
           int col[9]={0};
           int row[9]={0};
          for(int j=0;j<9;j++){
            if(board[j][i]!='.')
            col[board[j][i]-49]++;
            if(board[i][j]!='.')
            row[board[i][j]-49]++;
            
            if(board[j][i]!='.'&&col[board[j][i]-49]>1){
              return false;
            }
            if(board[i][j]!='.'&&row[board[i][j]-49]>1){
              return false;
            }
          }
        }
       
      int j=0,k=0,col_end=2,row_end=2;
        for(int i=0;i<9;i++){
          cout<<row_end<<" "<<col_end<<endl;
          bool ans=check(board,j,row_end,k,col_end);
          
          if(ans==false) return false;
          
          if(row_end+3<=8){
             
             k+=3;
             row_end+=3;
          }
          else{
            k=0;
            row_end=2;
            col_end+=3;
            j+=3;
          }
        }
        
        return true;
    }
};

	
