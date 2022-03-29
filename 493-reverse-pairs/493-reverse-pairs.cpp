class Solution {
public:
    int merge(vector<int>&nums,int l,int mid,int h){
        int c=0;
        int j=mid+1;
        for(int i=l;i<=mid;i++){
            while(j<=h and nums[i]>2LL*nums[j]){
                j++;
            }
            c+=(j-(mid+1));
        }
    
    vector<int>temp;
    int left=l,right=mid+1;
    while(left<=mid and right<=h){
        if(nums[left]<=nums[right])
            temp.push_back(nums[left++]);
        else temp.push_back(nums[right++]);
    }
    while(left<=mid) temp.push_back(nums[left++]);
     while(right<=h) temp.push_back(nums[right++]);
    for(int i=l;i<=h;i++){
        nums[i]=temp[i-l];
    }
        return c;
    }
    
    int mergesort(vector<int>&nums,int l,int h){
        if(l>=h) return 0;
        int mid=(l+h)/2;
        int count=mergesort(nums,l,mid);
        count+=mergesort(nums,mid+1,h);
        count+=merge(nums,l,mid,h);
        return count;
    }
    int reversePairs(vector<int>& nums) {
      return mergesort(nums,0,nums.size()-1);  
    }
};