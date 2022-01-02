class Solution {
public:
    bool checkString(string s) {
        bool b=false;
       for(int i=0;i<s.length();i++){
         if(s[i]=='a'&&b==true){
            return false;
         }
         else if(s[i]=='b'){
           b=true;
         }
           
         }
      return true;
       
    }
};
