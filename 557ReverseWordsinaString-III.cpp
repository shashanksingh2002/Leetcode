class Solution {
public:
    string reverseWords(string s) {
        if(s.length()==1){
          return s;
        }
      int i=0;
      while(i<s.length()){
        int start=i;
        while(s[i+1]!='\0'&&s[i+1]!=' '){
          i++;
        }
        int end=i;
        while(start<end){
          std::swap(s[start],s[end]);
          ++start;
          --end;
        }
        i+=2;
        
      }
      return s;
    }
};
