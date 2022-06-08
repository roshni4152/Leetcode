class Solution {
public:
    bool ispalindrome(string s){
      int l=0,h=s.length()-1;
        while(l<h){
            if(s[l]!=s[h])
                return 1;
            else {
                l++;
                h--;
        }
        }
        return 0;
    }
    int removePalindromeSub(string s) {
        return ispalindrome(s)+1;
    }
};