class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        map<char,int> m;
        int maxi=0,count=0,start=0;
        for(int i=0;i<s.length();++i){
          m[s[i]]++;
          if(m[s[i]]>1){
             while(s[start]!=s[i]){
               m[s[start]]--;
               ++start;
             } 
             ++start;
             m[s[i]]--;
             count=i-start+1;
          }
          else{
            count++;
          }
          if(count>maxi){
            maxi=count;
          }
        }
      return maxi;
    }
};
