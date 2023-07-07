//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        
        if(low<high) {
            int pi = partition(arr,low,high);
            quickSort(arr,low,pi-1);
            quickSort(arr, pi+1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int i=low-1;
       int pi=arr[high];
       for(int j=low; j<high; j++) {
           if(arr[j]<pi) {
               i++;
               swap(arr[i],arr[j]);
           }
       }
       swap(arr[i+1],arr[high]);
       return i+1;
    }

    // time complexity:- O(n log n)
    // space complexity:-  in place algo, doesn't use extra space as such. 
    //                     but as we are using recursive calls, the recursive calls use memory in that call stack. 
                        
    //                     avg case:- O(n). 
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends