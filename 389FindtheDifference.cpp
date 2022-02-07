class Solution {
public:
    char findTheDifference(string s, string t) {
        int hash[26]={0};
        for(int i=0;i<s.length();++i){
          hash[s[i]-97]++;
        }
        for(int i=0;i<t.length();++i){
          if(hash[t[i]-97]>0){
             hash[t[i]-97]--;
          }
          else{
            hash[t[i]-97]++;
          }
        }
      for(int i=0;i<26;i++){
        if(hash[i]>0){
          return i+97;
        }
      }
      return -1;
    }
};
