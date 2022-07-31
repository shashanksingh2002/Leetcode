class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m1;
        for(int i=0;i<s.length();++i){
            m1[s[i]]++;
        }
        int count=0;
        bool oddCount = false;
        for(auto &i:m1){
            if(i.second%2!=0) oddCount=true;
            count+=(i.second/2);
        }
        if(oddCount) return 2*count+1;
        return 2*count;
    }
};
