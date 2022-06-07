class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int a=0,b=0, sum=0;
        for(int i=0;i<n;i++){
            if(i!=n-i-1){
            a=mat[i][i];
                b=mat[i][n-i-1];
            sum=sum+a+b;
            }
            else sum+=mat[i][i];
    }
        return sum;
    }
    
};
