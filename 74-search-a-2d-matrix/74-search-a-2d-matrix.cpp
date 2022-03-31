class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(),c=matrix[0].size();
        if(r==0 or c==0) return false;
        int low=0,high=r*c-1;
    while(low<=high){
        int mid=low+(high-low)/2;
       int i=matrix[mid/c][mid%c];
        if(target==i) return true;
        else if(target<i)high=mid-1;
        else low=mid+1;
        
    }
    return false;
}
    
};
