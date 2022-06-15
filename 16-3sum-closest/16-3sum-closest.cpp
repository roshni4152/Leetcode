class Solution {
public:
   int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++){
            int l=i+1,r=n-1;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(sum==target){
                    ans=target;
                    return ans;
                }
                else if(sum<target){
                    if(abs(target-ans)>abs(target-sum)){
                        ans=sum;
                    }
                    l++;
                }
                else{
                    if(abs(target-ans)>abs(target-sum)){
                        ans=sum;
                    }
                    r--;
                }
            }
        }
        return ans;
    }
};