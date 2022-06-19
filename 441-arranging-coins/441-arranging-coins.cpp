class Solution {
public:
    int arrangeCoins(int n) {
        long a=round(sqrt(n));
        int c;
        while(a){
            long b=(a*(a+1))/2;
            if(b<n)
                a++;
            else if(b==n)
                return a;
            else{
                c=--a;
                return c;
            }
        }
        return c;
    }
};