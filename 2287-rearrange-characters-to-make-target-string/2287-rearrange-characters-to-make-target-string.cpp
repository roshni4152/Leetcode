class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>s1;
        unordered_map<char,int>s2;
        int mini=INT_MAX;
        for(auto i:s){
            s1[i]++;
        }
        for(auto i:target) s2[i]++;
        for(auto i:s2) mini=min(mini,s1[i.first]/i.second);
        return mini;
    }
};
