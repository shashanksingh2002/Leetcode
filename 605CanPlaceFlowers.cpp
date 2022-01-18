class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        
        int size=flowerbed.size()-1;
        if(size==0){
          if(flowerbed[size]==0) return true;
          return false;
        }
        int count=0;
        if(size>=1&&flowerbed[0]==0&&flowerbed[1]==0){
          flowerbed[0]=1;
          count++;
        }
        if(size>=1&&flowerbed[size]==0&&flowerbed[size-1]==0){
           flowerbed[size]=1;
           count++;
        }
        for(int i=1;i<flowerbed.size()-1;++i){
           if(count>=n) return true;
         else if(flowerbed[i]==0&&flowerbed[i-1]==0&&flowerbed[i+1]==0){
            flowerbed[i]=1;
            count++;
            i++;
          }
        }
      if(count>=n) return true;
      return false;
    }
};
