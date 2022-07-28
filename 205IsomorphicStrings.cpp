class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m1;
        for(int i=0;i<s.length();++i){
                if(m1.find(s[i])!=m1.end()){
                    s[i]=m1[s[i]];
                    if(s[i]!=t[i]) return false;
                } 
                else{
                    for(auto &j:m1){
                        if(j.second==t[i]) return false;
                    }
                    m1[s[i]]=t[i];
                    s[i]=t[i];
                }
                
        }
    
        return true;
    }
};
