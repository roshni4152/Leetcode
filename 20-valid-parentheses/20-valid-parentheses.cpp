class Solution {
public:
    bool isValid(string s) {
       vector<char>stk;
        for(auto i:s){
            if(stk.empty()) stk.push_back(i);
            else if(stk.back()=='(' and i==')')
                stk.pop_back();
            else if(stk.back()=='{' and i=='}')
                stk.pop_back();
            else if(stk.back()=='[' and i==']')
                stk.pop_back();
            else stk.push_back(i);
        }
        return stk.empty();
            }
};