class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
      unsigned long long ans=mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++){
           if(ans>=asteroids[i]){
             ans+=asteroids[i];
           }
          else return false;
        }
      return true;
    }
};
