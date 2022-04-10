class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>ans;
        for(string c:ops){
           
            if(c=="C")
                ans.pop_back();
            else if(c=="D")
                ans.push_back(ans.back()*2);
            else if(c=="+")
                ans.push_back(ans.back() + ans[ans.size() - 2]);
            else
                ans.push_back(stoi(c));
        }
        return accumulate(ans.begin(),ans.end(),0);
    }
};
