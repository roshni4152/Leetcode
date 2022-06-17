class Solution {
public:
    int longestPalindrome(string s) {
        int count=0;
       unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(mp[s[i]]%2==0)
                count+=2;
        }
        for(auto i:mp){
            if((i.second)%2==1){
            count++;
            break;
        }
        }
        
        return count;
    }
};
