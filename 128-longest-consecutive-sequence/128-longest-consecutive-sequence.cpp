class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count=1,ans=0;
        int i;
        sort(nums.begin(),nums.end());
        for(i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1)
                count++;
            else if(nums[i]==nums[i-1])
                continue;
            else{
                ans=max(ans,count);
                count=1;
                
            }
        }if(i==n)
            ans=max(ans,count);    
        return ans;
    }
};

