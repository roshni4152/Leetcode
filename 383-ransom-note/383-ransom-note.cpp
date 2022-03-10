class Solution {
public:
    bool canConstruct(string pat, string txt) {
        int m=pat.length();
        int n=txt.length();
        int freq[26]={};
       for(int i=0;i<n;i++)
           freq[int(txt[i])-97]++;
        for(int i=0;i<m;i++)
            freq[int(pat[i])-97]--;
        for(int i=0;i<26;i++){
            if(freq[i]<0)
                return false;
        }
        return true;
    }
};
