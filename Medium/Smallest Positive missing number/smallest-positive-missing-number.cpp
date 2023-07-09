//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        
        /*
        // Initialize a vector to store the missing numbers.
        vector<int> missingNumbers;
    
        // Iterate over the array and mark all the elements that are present.
        for (int i = 0; i < n; i++) {
          if (arr[i] > 0) {
            missingNumbers.push_back(arr[i]);
          }
        }
    
        // Find the smallest missing number.
        int smallestMissingNumber = 1;
        for (int i = 0; i < missingNumbers.size(); i++) {
          if (missingNumbers[i] != smallestMissingNumber) {
            return smallestMissingNumber;
          }
          smallestMissingNumber++;
        }
    
        // If all the numbers from 1 to n are present, then the smallest missing number is n + 1.
        return smallestMissingNumber;
        
        */
        
        // optimal code:- 
        
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            if(arr[i]>0)
                ans.push_back(arr[i]);
        }
        
        if(ans.size()==0)
            return 1;
            
        sort(ans.begin(),ans.end());
        
        if(ans[0]!=1)
            return 1;
            
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]!=ans[i+1] && ans[i]+1!=ans[i+1])
                return ans[i]+1;
        }
        
        return ans[ans.size()-1]+1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends