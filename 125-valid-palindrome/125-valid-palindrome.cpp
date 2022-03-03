class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string str="";
        for(int i=0;i<n;i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='0' and s[i]<='9'))
                str+=s[i];
        }
        string rev=str;
        reverse(str.begin(),str.end());
        return rev==str;
    }
};
