class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int prev_diff=nums[1]-nums[0];
        int c=0;
        int a=0;
        int diff=0;
        for(int i=1;i<n-1;i++){
            diff=nums[i+1]-nums[i];
            if(diff==prev_diff) a++;
            else{
                prev_diff=diff;
                a=0;
            }
            c+=a;
        }
        return c;
    }
};