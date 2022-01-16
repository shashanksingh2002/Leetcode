class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      vector<int> v1(26,0);
      vector<int> v2(26,0);
      int ptr=0;
      for(int i=0;i<s1.length();++i){
        v1[s1[i]-97]++;
      }
      for(int i=0;i<s2.length();++i){
        if(v1==v2) return true;
        else if(v1[s2[i]-97]>0){
            if(v1[s2[i]-97]==v2[s2[i]-97]){
               while(ptr<s2.length()&&s2[ptr]!=s2[i]){
                 v2[s2[ptr]-97]--;
                 
                 ++ptr;
               }
              ++ptr;
            }
            else{
              v2[s2[i]-97]++;
            }
        }
        else{

          ptr=i+1;
          v2.assign(v2.size(), 0);

        }
       
      }
      if(v1==v2) return true;
      return false;
    }
};
