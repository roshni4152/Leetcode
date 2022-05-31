class Solution {
public:
    string countAndSay(int n) {
        string s="1",res="1";
        n--;
        while(n--){
            int c=1;
            res="";
            for(int i=1;i<s.size();i++){
                if(s[i-1]==s[i]) c++;
                else{
                    res+=to_string(c);
                    res+=s[i-1];
                    c=1;
                    }
            }
            res+=to_string(c);
                    res+=s[s.size()-1];
            s=res;       
        }
        return res;
        
    }
};