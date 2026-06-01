class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char ch: s){
            if(isalnum(ch)){
                ch=tolower(ch);
                str+=ch;
            }
        }

        int i=0,j=str.length()-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
