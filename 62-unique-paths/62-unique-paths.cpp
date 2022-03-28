class Solution {
public:
    int uniquePaths(int m, int n) {
       int r=n+m-2,d=m-1;
        double res=1;
        for (int i=1;i<=d;i++)
          res=res*(r-d+i)/i;
        return (int)res;
    }
};