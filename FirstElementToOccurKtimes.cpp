/*
Author:- Deven Nandapurkar 

Date:- 18th may. 

Problem:- First element to occur k times. 

Given an array of N integers. Find the first element that occurs at least K number of times.

Difficulty level:- Easy. 

Cpp solution 👇👇
*/

class Solution{
    public:
    int firstElementKTime(int arr[], int n, int k)
    {
        if(k==1)
            return arr[0];
            
        for(int i=1; i<n; i++) {
            int c=1;
            for(int j=i-1; j>=0; j--) {
                if(arr[i] == arr[j]) {
                    c++;
                }
                if(c == k) 
                    return arr[i];
            }
        }
        return -1;
    }
};

// time complexity:- O(n) 
// space complexity:- O(n) 
