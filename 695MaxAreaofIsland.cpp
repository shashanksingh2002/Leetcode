class Solution {
public:
    void dfs(vector<vector<int>> &grid,int &count,int &maxi,int i,int j,int col){
     
      if(i<0||j<0||i==grid.size()||j==col){
      
        maxi=max(maxi,count);
        return;
      } 
      if(grid[i][j]==0){
        
        maxi=max(maxi,count);
    
         return;
      } 
      count++;
      grid[i][j]=0;
      maxi=max(count,maxi); 
      dfs(grid,count,maxi,i,j+1,col);
      dfs(grid,count,maxi,i+1,j,col);
      dfs(grid,count,maxi,i,j-1,col);
      dfs(grid,count,maxi,i-1,j,col);
    
      
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count=0,maxi=0;
        for(int i=0;i<grid.size();++i){   
        for(int j=0;j<grid[i].size();++j){
        if(grid[i][j]==1){
        count=0;
        dfs(grid,count,maxi,i,j,grid[i].size());
        }
        }
        }
          return maxi;
    }
};
