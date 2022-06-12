class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int min=INT_MAX;
        int flag=1;
        int n=strs.size();
        for(int i=0;i<n;i++){
        if(strs[i].size()<min)
    min=strs[i].size();}
        for(int i=0;i<min;i++){
            char c=strs[0][i];
            for(int j=0;j<n;j++){
                if(strs[j][i]==c)
                    continue;
                else{
                    flag=0;
                    return ans;}
                
            }
            if(flag=1)ans+=c;
        }
        return ans;
    }
};