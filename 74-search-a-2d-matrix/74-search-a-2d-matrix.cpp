class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int row=matrix.size(),col=matrix[0].size();
        int low=0,high=row*col-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int i=matrix[mid/col][mid%col];
            if(target==i) return true;
            else if(target<i) high=mid-1;
            else low=mid+1;
        }
        
    
    return false;
}
    
};
