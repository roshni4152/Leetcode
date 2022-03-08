class Solution {
public:
    
        int majorityElement(vector<int> &num) {
    unordered_map<int,int>m;int res;
    for(int i=0;i<num.size();i++)
        m[num[i]]++;
    for(auto a:m){
    if(a.second>(num.size()/2))
        res= a.first;
    }
            return res;   
}
};