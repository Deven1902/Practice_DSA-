//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    // striver's solution
    
    int solve( int i , int j , string &s1, string &s2 , vector<vector<int>>&dp){
        if( i<0 )   return j+1;
        if( j<0)   return i+ 1;
        if( dp[i][j]!=-1)  return dp[i][j];
    
        if(s1[i]==s2[j])
            return dp[i][j] = solve( i-1,j-1,s1,s2,dp) ;

        return dp[i][j] = 1 + min( solve( i-1,j,s1,s2,dp) , min( solve(  i,j-1,s1,s2,dp) , solve( i-1,j-1,s1,s2,dp)));
    }
        
    int editDistance(string s, string t) {
        // Code here
        
        int n = s.size();
        int m = t.size();

        vector<vector<int>>dp( n ,vector<int>(m,-1));
        return solve( n-1,m-1, s,t , dp);
    }
};



//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends