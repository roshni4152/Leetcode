class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n);
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            matrix[i]=temp;
        }
        int top=0,bottom=n-1,left=0,right=n-1,count=1;
        while(left<=right && top<=bottom){
                for(int i=left;i<=right;i++){
                    matrix[top][i]=count;
                    count++;
                }
                top++;
                for(int i=top;i<=bottom;i++){
                    matrix[i][right]=count;
                    count++;                    
                }
                right--;
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=count;
                    count++;                    
                }
                bottom--;
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=count;
                    count++;
                }
                left++;
            }           
        return matrix;
    }
};