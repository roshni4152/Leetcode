class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size(),sum=0;
        double avg=0;
      sort(salary.begin(),salary.end());
        for(int i=1;i<n-1;i++){
            sum+=salary[i];
        }
        avg=sum*1.0/(n-2);
        return avg;
    }
};
