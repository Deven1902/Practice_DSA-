//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
        // Sort the array in ascending order
        sort(arr, arr + n);
    
        // Initialize variables for the sum and two pointers
        int sum = 0;
        int i = 0, j = n - 1;
    
        // Loop until the pointers meet
        while (i < j) {
            // Calculate the sum of the elements at the current positions
            sum = arr[i] + arr[j];
    
            // If the sum is equal to the target value, return true
            if (sum == x)
                return true;
            // If the sum is greater than the target value, decrement the right pointer
            else if (sum > x)
                j--;
            // If the sum is less than the target value, increment the left pointer
            else
                i++;
        }
    
        // If no pair is found, return false
        return false;
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends
