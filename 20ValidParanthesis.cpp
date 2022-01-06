class Solution {
public:
    bool isValid(string s) {
        stack<char> m;
      for(int i=0;i<s.length();i++){
        char curr = s[i];
        if(m.empty()||curr=='('||curr=='['||curr=='{'){
           m.push(curr);
        }
        else if(curr==')'&&m.top()!='(') return false;
         else if(curr=='}'&&m.top()!='{') return false;
         else if(curr==']'&&m.top()!='[') return false;
        else m.pop();
          
        }
      if(m.empty()) return true;
      else return false;
      
    }
};
