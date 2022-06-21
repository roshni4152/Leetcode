// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    public:
    void func(int index,int s,vector<int> &arr,int N,vector<int>&sum){
        if(index==N){
            sum.push_back(s);
        return ;
        }
        func(index+1,s+arr[index],arr,N,sum);
        func(index+1,s,arr,N,sum);
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>sum;
        func(0,0,arr,N,sum);
        sort(arr.begin(),arr.end());
        return sum;
        // Write Your Code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends