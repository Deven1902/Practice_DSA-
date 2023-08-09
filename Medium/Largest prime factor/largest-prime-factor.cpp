//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n){
        // code here
        
        int ans=2;
        while(n%2==0)
            n=n/2;
            
        for(int i=3; i<=n; i+=2) {
            if(n%i==0) {
                ans=i;
                while(n%i==0)
                    n=n/i;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends