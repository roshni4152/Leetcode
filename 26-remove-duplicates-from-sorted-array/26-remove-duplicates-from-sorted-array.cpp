class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        set<int>a;
        for(auto i:nums){
            a.insert(i);
        }
        int i=0;
        for(auto b:a){
            nums[i]=b;
            i++;}
        return a.size();
            }
    
};
