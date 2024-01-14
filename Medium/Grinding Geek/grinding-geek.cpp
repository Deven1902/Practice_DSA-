//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
        
        vector<vector<int>>dp(n,vector<int>(total+1,-1));
        return find(0,cost,dp,total);
    }
    
    int find(int i,vector<int>&cost,vector<vector<int>>&dp,int t){
        if(t<=0 or i==cost.size()) return 0;
        if(dp[i][t]!=-1) return dp[i][t];
        int take=0;
        if(cost[i]<=t){
            int d=cost[i]/10;
            if(cost[i]%10) d++;
            take=1+find(i+1,cost,dp,t-d);
        }
        int ntake=find(i+1,cost,dp,t);
        return dp[i][t]=max(take,ntake);
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends