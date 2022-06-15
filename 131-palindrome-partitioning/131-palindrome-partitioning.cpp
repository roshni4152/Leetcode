class Solution {
public:
    vector<vector<string>> partition(string s) {
       vector<vector<string>>res;
        vector<string>path;
        part(0,s,path,res);
        return res;
    }
    void part(int ind,string s,vector<string> &path,vector<vector<string>> &res){
        if(ind==s.size()){
            res.push_back(path);
                return;
        }
        for(int i=ind;i<s.size();i++){
            if(palindrome(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                part(i+1,s,path,res);
                path.pop_back();
            }
        }
    }
    bool palindrome(string s, int low,int high){
        while(low<=high){
            if(s[low++]!=s[high--]) return false;
        }
        return true;
    }
};