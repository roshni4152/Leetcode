class Solution {
public:
    bool isValid(string s) {
        vector<char>v;
        for(auto i:s){
            if(v.empty()) v.push_back(i);
            else if(v.back()=='(' and i==')') v.pop_back();
            else if(v.back()=='{' and i=='}') v.pop_back();
            else if(v.back()=='[' and i==']') v.pop_back();
            else v.push_back(i);
        }
        return v.empty();
    }
};