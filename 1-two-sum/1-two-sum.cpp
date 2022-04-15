class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>map;
        for (int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(map.find(diff)!=map.end()){
                ans.push_back(map[diff]);
            ans.push_back(i);
        }
            map[nums[i]]=i;
        }
        return ans;
    }
};