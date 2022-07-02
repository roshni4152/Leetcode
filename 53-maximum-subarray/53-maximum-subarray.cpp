class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxend=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            maxend=max(nums[i],maxend+nums[i]);
            res=max(res,maxend);
        }
        return res;
    }
};