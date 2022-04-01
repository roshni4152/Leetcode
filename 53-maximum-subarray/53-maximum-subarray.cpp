class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],max_end=nums[0];
        for(int i=1;i<nums.size();i++){
            max_end=max(max_end+nums[i],nums[i]);
            sum=max(sum,max_end);
        }
        return sum;
    }
};