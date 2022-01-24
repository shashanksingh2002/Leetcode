class Solution {
public:
    bool detectCapitalUse(string word) {
      int countSmall=0,countBig=0;
      for(int i=0;i<word.length();i++){
        if(word[i]>=65&&word[i]<=90) countBig++;
        else countSmall++;
      }
      if(countBig==1&&word[0]<97) return true;
      else if(countBig==0||countSmall==0) return true;
      else return false;
    }
};
