class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> cnt;
        for (int n : nums) cnt[n]++;
        sort(begin(nums), end(nums), [&](int a, int b) { 
            if(cnt[a] != cnt[b]) 
                return cnt[a] < cnt[b] ;
                else 
                    return a > b; 
        });
             return nums;
    }
};
           