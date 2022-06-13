class Solution {
public:
    bool isPowerOfTwo(int n) {
      if(n==1) return true;
        if(n==0 or n<0) return false;
        while(n>0){
            if(n%2!=0 and n>2) return false;
            n=n/2;
        }
        return true;
    }
};