class Solution {
public:
    vector<string> convertStringToVectorString(string &s){
        vector<string> ans;
        int i=0;
        while(i<s.length()){
            string temp="";
            while(s[i]!= ' ' && s[i] != '\0'){
                temp+=s[i];
                i++;
            }
            ans.push_back(temp);
            i++;
        }
        return ans;
    }
    bool wordPattern(string pattern, string s) {
       int hash[26]={0};
       vector<string> str = convertStringToVectorString(s);
       if(str.size() == 1 && str[0].length() == pattern.length() && pattern.length() != 1) return false;
       if(str.size() != pattern.length()) return false;
       unordered_map<string,char> umap;
       for(int i=0;i<pattern.length();i++){
           if(umap.find(str[i]) != umap.end() && umap[str[i]] != pattern[i]) return false;
           else if(umap.find(str[i]) == umap.end() && hash[pattern[i]-97] == 1) return false;
           else{
               umap[str[i]] = pattern[i];
               hash[pattern[i]-97] = 1;
           } 
       }
       return true;
    }
};
