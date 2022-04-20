class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1,maxsize=0,i;
        for(i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1)
                c++;
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
            maxsize=max(maxsize,c);
                c=1;
        }
        }
        if(i==nums.size())
            maxsize=max(maxsize,c);
            
        
        return maxsize;
    
    }
};