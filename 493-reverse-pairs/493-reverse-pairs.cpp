class Solution {
public:
    int merge(vector<int>&nums,int low,int mid,int high){
        int c=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high and nums[i]>2LL*nums[j]){
                j++;
            }
                c+=(j-(mid+1));
        }
        vector<int>temp;
        int left=low ,right=mid+1;
        while(left<=mid and right<=high){
            if(nums[left]<=nums[right])
                temp.push_back(nums[left++]);
            else temp.push_back(nums[right++]);
            
        }
        
        
        while(left<=mid)temp.push_back(nums[left++]);
        while(right<=high)temp.push_back(nums[right++]);
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
        return c;
    }
        
    
    int mergesort(vector<int>&nums,int low,int high){
        if(low>=high)return 0;
        int mid=(low+high)/2;
        int count=mergesort(nums,low,mid);
        count+=mergesort(nums,mid+1,high);
        count+=merge(nums,low,mid,high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};