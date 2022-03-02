class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        unordered_map <int,int> ans;
        
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(ans.find(diff)!=ans.end()){
                v.push_back(ans[diff]);
                v.push_back(i);
            }
            ans[nums[i]]=i;
        }
        
       return v;
        }
    
};
