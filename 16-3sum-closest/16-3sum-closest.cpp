class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2],sum=0;
        for(int i=0;i<nums.size();i++){
            int low=i+1,high=nums.size()-1;
            while(low<high){
                sum=nums[i]+nums[low]+nums[high];
                if(sum==target) return target;
                
                else if(sum<target){
                    if(abs(target-ans)>abs(target-sum)) {ans=sum;
                                                        }
                     low++;
                }
                else {
                    if(abs(target-ans)>abs(target-sum))
                    ans=sum;
                
                high--;
                }
            }
        }
        return ans;
    }
};