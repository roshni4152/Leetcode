class Solution {
public:
    int thirdMax(vector<int>& nums) {
       map<int,int>m;
        vector<int>v;
        for(auto i:nums)
            m[i]++;
        for(auto i :m)
            v.push_back(i.first);
        if(v.size()<3) 
            return v[v.size()-1];
        else return v[v.size()-3];
        
    }
};