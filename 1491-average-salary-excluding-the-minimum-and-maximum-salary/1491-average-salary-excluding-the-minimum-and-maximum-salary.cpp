class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size(),sum=0;
        int minimum=salary[0],maximum=salary[n-1];
      
        for(int i=0;i<n;i++){
            minimum=min(minimum,salary[i]);
            maximum=max(maximum,salary[i]);
            sum+=salary[i];
        }
        return (sum-maximum-minimum)*1.0/(n-2);
       
    }
};
