class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0,i=s.length() - 1;
        while(i>=0 and s[i]==' '){i--;}
        while(i>=0 and s[i]!=' '){i--;len++;}
        
        return len;
    }
};
