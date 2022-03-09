class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>map;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        map[nums[i]]++;
        for(auto i:map){
            if(i.second==1)
                v.push_back(i.first);
        }
        return v;
    }
};