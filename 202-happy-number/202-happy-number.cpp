class Solution {
public:
    int check(int t){
        int s=0;
        while(t>0){
            s+=(t%10)*(t%10);
            t/=10;
        }
        return s;
    }
    bool isHappy(int n) {
       int temp=n;
       while(1){
           if(temp==89) return false;
           if(temp==1) return true;
           temp=check(temp);
       }
        
    }
};