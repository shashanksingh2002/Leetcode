class Solution {
public:
    bool detectCapitalUse(string word) {
        bool isFirstLetterCapital = false, smallLettersPresent = false, capitalLettersPresent = false;
        for(int i=0;i<word.length();++i){
            if(i==0 && word[i]<=90) isFirstLetterCapital = true;
            else if(word[i]<=90) capitalLettersPresent = true;
            else if(word[i]>=97) smallLettersPresent = true;
        }
        if(isFirstLetterCapital && capitalLettersPresent && !smallLettersPresent) return true;
        if(isFirstLetterCapital && !capitalLettersPresent) return true;
        if(!isFirstLetterCapital && !capitalLettersPresent) return true;
        return false;
    }
};
