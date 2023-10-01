//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

/* 
Approach:- 👇


run 4 for loops :
     top row (left to right)
     right column (top to bottom)
     bottom row (right to left)
     left column ( bottom to up)

//  Note that the corner elements will be considered twice in the loops. 
//  so device your for loop conditions in such a way that the elements dont get repeated. 

*/

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        
        vector<int> ans;
        if(r==1 && c==1) 
            return {matrix[0][0]};
            
        if(r==1) {
            for(int i=0; i<c; i++)
                ans.push_back(matrix[0][i]);
                
            return ans;
        }
        
        if(c==1) {
            for(int i=0; i<r; i++)
                ans.push_back(matrix[i][0]);
                
            return ans;
        }
        
         for(int i = 0; i<c; i++)           // inserting top most row
            ans.push_back(matrix[0][i]);
        
        
        for(int i = 1; i<r; i++)           // inserting right most row
            ans.push_back(matrix[i][c-1]);
        
        for(int i = c-2; i>=0; i--)           // inserting bottom most row
        
            ans.push_back(matrix[r-1][i]);
        
        for(int i = r-2;i>0; i--)           // inserting left most row
            ans.push_back(matrix[i][0]);
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
