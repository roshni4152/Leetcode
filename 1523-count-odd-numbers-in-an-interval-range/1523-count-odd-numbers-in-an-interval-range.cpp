class Solution {
public:
    int countOdds(int low, int high) {
        int count=high-low+1;
       if(low&1 and high&1)
           count++;
       
        return count/2;
    }
};