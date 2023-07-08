//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string a[], int n)
    {
        // your code here
        
        sort(a, a+n);
        int i=0;
        int j=0;
        
        string res="";
        
        while(i<a[0].size()&&j<a[n-1].size()) {
            if(a[0][i] != a[n-1][j]) 
                break;
            res+=a[0][i];
            i++;
            j++;
        }
        
        if(res=="")
            return "-1";
            
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends