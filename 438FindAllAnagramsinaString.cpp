class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
       if(p.length()>s.length()){
         return ans;
       }
       map<char,int> m1;
       map<char,int>m2;
        for(int i=0;i<p.length();++i){
          m1[p[i]]++;
        }
        int i=0,k=0;
       while(k<=s.length()-p.length()){
           m2[s[i]]++;
        
          if(m1==m2){
            ans.push_back(k);
             if(m2[s[k]]==1){
               m2.erase(s[k]);
             }
             else{
               m2[s[k]]--;
             }
            i++;
            k++;
          }
          else if(m1.find(s[i])!=m1.end()){
            if(m2[s[i]]<=m1[s[i]]){
              i++;
            }
            else{
              if(s[i]==s[k]){
                  m2[s[i]]--;
             
              }
              else{
             
               while(s[k]!=s[i]){
               m2[s[k]]--;
                if(m2[s[k]]==0) m2.erase(s[k]);
                 k++;
               }
    
                m2[s[k]]--;
                if(m2[s[k]]==0) m2.erase(s[k]);
        
              }
              k++;
              i++;
             
            }
          }
          else{
            m2.clear();
            i++;
            k=i;
          }
       }
        
      return ans;
        
      
    }
};
