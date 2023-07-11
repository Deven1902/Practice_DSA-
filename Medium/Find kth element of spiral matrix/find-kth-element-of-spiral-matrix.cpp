//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends

class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int A[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		
 		if (n < 1 || m < 1)
            return -1;
    
    
        /* Element is in first row */
    
        if (k <= m)
            return A[0][k-1];
    
    
        /* Element is in last column */
    
        if (k <= (m+n-1))
            return A[(k-m)][m-1];
    
    
        /* Element is in last row */
    
        if (k <= (m+n-1+m-1))
            return A[n-1][m-1-(k-(m+n-1))];
    
    
        /* Element is in first column */
    
        if (k <= (m+n-1+m-1+n-2))
            return A[n-1-(k-(m+n-1+m-1))][0];
    
    
        /* Recursion for sub-matrix. &A[1][1] is address to next inside sub matrix.*/
    
        return findK((int (*)[MAX])(&(A[1][1])), n-2, m-2, k-(2*n+2*m-4));
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends