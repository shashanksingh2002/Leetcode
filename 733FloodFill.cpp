class Solution {
public:
    void recursiveFunction(vector<vector<int>> &image,int i, int j,int newColor,int val,int col){
      if(i==image.size()||j==col||i<0||j<0) return;
      if(image[i][j]!=val){
        return;
      }
      image[i][j]=newColor;
      
      recursiveFunction(image,i,j-1,newColor,val,col);
      recursiveFunction(image,i-1,j,newColor,val,col);
      recursiveFunction(image,i,j+1,newColor,val,col);
      recursiveFunction(image,i+1,j,newColor,val,col);
     }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
          if(image[sr][sc]==newColor) return image;
          recursiveFunction(image,sr,sc,newColor,image[sr][sc],image[0].size());
          return image;
          
          
    }
};
