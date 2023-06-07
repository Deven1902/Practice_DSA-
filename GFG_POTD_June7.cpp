/*
Author:- Deven Nandapurkar. 

GFG Problem of the day. 

Date:- 7th June. 

Problem:- Least Prime Factor 
    Given a number N, find the least prime factors for all numbers from 1 to N.  
    The least prime factor of an integer X is the smallest prime number that divides it.
    
    Note :

        1 needs to be printed for 1.
        You need to return an array/vector/list of size N+1 and need to use 1-based indexing to store the answer for each number.
        
Problem Link:- https://practice.geeksforgeeks.org/problems/least-prime-factor5216/1 

Difficulty:- easy. 

Cpp solution below 👇👇
*/

class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        
        // an array to store all the divisors of the number. 
        vector<int> ans(n+1);
        
        // storing 
        for(int i=0; i<n+1; i++) {
            ans[i] = i;
        }
        
        // outer loop marks all the multiples of 2 as 2. 
        for(int i = 2; i < n + 1; i++){
            if(ans[i] == i) // here if ans[i] != i, then it is not a prime number
            // if paases then it is a prime number 
            {
                // now the inner loop checks for all the multiples. 
                
                for(int j = i+i; j < n+1; j += i) {
                    // and this statement below swaps the multiple with the smallest multiple and finally store that in the ans. 
                    ans[j] = min(ans[j], i);
                }
            }
        }
        
        // hence we return ans . 
        return ans;
    }
};

// time complexity:- O(N log N)

// space complexity:- O(N)
