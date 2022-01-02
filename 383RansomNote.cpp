class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransom[26]={0};
        int Magazine[26]={0};
        for(int i=0;i<ransomNote.length();i++) {
            ransom[ransomNote[i]-97]++;
        }
        for(int i=0;i<magazine.length();i++){
          Magazine[magazine[i]-97]++;
        }
        for(int i=0;i<26;i++){
          if(ransom[i]>0&&Magazine[i]<ransom[i]){
            return false;
          }
        }
      return true;
    }
};
