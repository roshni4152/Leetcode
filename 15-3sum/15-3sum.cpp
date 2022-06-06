class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            if(i==0 or(i>0 and nums[i]!=nums[i-1])){
                int low=i+1,high=n-1,sum=0-nums[i];
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[low]);
                        v.push_back(nums[high]);
                        ans.push_back(v);
                        while(low<high and nums[low]==nums[low+1]) low++;
                      while(low<high and nums[high]==nums[high-1]) high--;   
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum)low++;
                    else high--;
                }
            }
        }
        return ans;
    }
};