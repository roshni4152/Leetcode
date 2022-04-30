class Solution {
public:
    int longestValidParentheses(string s) {
        int left=0,right=0,maximum=0;
        for(auto i:s){
            if(i=='('){
                left++;  
            }
            else if(i==')') right++;
            if(left==right){
                maximum=max(maximum,left+right);
            }
            else if(right>left) left=right=0;
        }
    left=0,right=0;
   for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='('){
                left++;  
            }
            else if(s[i]==')') right++;
            if(left==right){
                maximum=max(maximum,left+right);
            }
            else if(left>right) left=right=0;
        }
    return maximum;
    }    
};
