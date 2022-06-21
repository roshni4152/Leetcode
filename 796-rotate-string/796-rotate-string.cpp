class Solution {
public:
    void shift(string &s){
        char c=s[0];
        for(int i=1;i<s.size();i++){
            s[i-1]=s[i];  
        }
        s[s.size()-1]=c;
    }
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        for(int i=0;i<s.size();i++){
            shift(s);
            if(s==goal) {return true; break;}
        }
        return false;
    }
};
