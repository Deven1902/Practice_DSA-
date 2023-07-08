//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends

/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int a[], int n)
    { 
        //Your code here
        
        // brute force approach :- using 3 nested loops
        
        /*
        bool tripletFound = false;
        for(int i=0; i<n-2; i++) {
            for(int j=i+1; j<n-1; j++) {
                for(int k=j+1; k<n; k++) {
                    if(a[i] + a[j] + a[k] == 0)
                        tripletFound=true;
                }
            }
        }
        if(tripletFound==false)
            return 1;
        else
            return 0;
        */
        // time complexity here is:- O(n^3) -> 3 nested loops
        // space complexity here is O(1) -> no extra space required. 
        
        // 2 sum approach 👇 
        sort(a ,a+n);
        for(int i=0;i<n;++i){
           
            int s= i+1;
            int e = n-1;
            while(s<e){
                int sum= a[i]+a[s]+a[e];
                
                if(sum==0)
                    return true;
                    
                else if(sum>0)
                    e--;
                    
                else 
                    s++;
               
            }
        }
        return 0;
        // time complexity:- O(n logn)
        // space complexity:- O(1)
        
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends