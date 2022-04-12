class Solution {
public:
    vector<vector<int>> helper(vector<vector<int>>& Board){
        vector<vector<int>> ans;
        for(int i=0;i<Board.size();i++){
           vector<int> temp;
          for(int j=0;j<Board[i].size();j++){
             temp.push_back(Board[i][j]);
          }
          ans.push_back(temp);
        }
        return ans;
    }
    void gameOfLife(vector<vector<int>>& Board) {
        vector<vector<int>> board=helper(Board);
      for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            int count=0;
            if(j+1<board[i].size()&&board[i][j+1]==1){
              count++;
            }
            if(j-1>=0&&board[i][j-1]==1){
              count++;
            }
            if(i-1>=0&&board[i-1][j]==1){
              count++;
            }
            if(i-1>=0&&j+1<board[i-1].size()&&board[i-1][j+1]==1){
                count++;
            }
            if(i-1>=0&&j-1>=0&&board[i-1][j-1]==1){
                count++;
            }
            if(i+1<board.size()&&board[i+1][j]==1){
              count++;
            }
            if(i+1<board.size()&&j+1<board[i+1].size()&&board[i+1][j+1]==1){
                count++;
            }
            if(i+1<board.size()&&j-1>=0&&board[i+1][j-1]==1){
                count++;
            }
            if(board[i][j]==0&&count==3){
              Board[i][j]=1;
            }
            if(board[i][j]==1){
                if(count>3){
                  Board[i][j]=0;
                }
                if(count<2){
                  Board[i][j]=0;
                }
            }
        }
      }
  }
};
