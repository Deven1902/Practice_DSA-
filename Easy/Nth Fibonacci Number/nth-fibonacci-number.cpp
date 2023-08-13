//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        
        // int a=0, b=1;
        // for(int i=2; i<=n; i++) {
        //     int sum = a+b;
        //     a=b;
        //     b=sum%10000000007;
        // }   
        // return b%10000000007;
        
        // if(n==1 || n==2)
        //     return 1;
            
        // int a=1, b=1;
        
        // for(int i=2; i<n; i++) {
        //     int temp=b;
        //     b = (a+b)%1000000007;
        //     a = temp;
        //     i++;
        // }
        
        // return b;
        
        if (n == 1 || n == 2)
            return 1;
        
        int a=1, b = 1;
        
        int i = 2;
        
        while(i < n) {
            int tmp = b;
            b = (a+b)%1000000007;
            a  = tmp;
            i++;
        }
        
        return b;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends