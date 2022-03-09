class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>h;
        for(int i=0;i<nums.size();i++){
            h[nums[i]]++;
            
        }
        int ress;
        for(auto i:h){
            if(i.second==1)
                ress=i.first;
        }
        return ress;
    }
};