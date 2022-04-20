class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        set<int>st;
        if(n==0) return 0;
        int i=0,j=0;
        int max_size=0;
        while(j<n){
            if(st.count(s[j])==0)
            {
                st.insert(s[j]);
                max_size=max(max_size,(int)st.size());
                j++;     
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return max_size;
    }
};