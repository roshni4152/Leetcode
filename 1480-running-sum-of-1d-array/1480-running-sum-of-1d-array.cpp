class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int sum=0;
        vector<int>v;
        int i=0;
        
       while(i<nums.size()){
            sum+=nums[i];
            v.push_back(sum);
            i++;
        }
        return v;
    }
};