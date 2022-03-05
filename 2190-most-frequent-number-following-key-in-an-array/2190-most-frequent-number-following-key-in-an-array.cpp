class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n=nums.size();
        map<int, int> hash;
    for (int i = 0; i < n-1; i++){
        if(nums[i]==key)
        hash[nums[i+1]]++;
    }
   
    int max_count = 0, res = 0;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
       
        return res;
    
    }
};