/* 
Author:- Deven Nandapurkar 

Date:- 18thy may 

Problem:- Check if the 2 arrays are euqal or not. 

Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. 
Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.

Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Problem Link:- https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&curated[]=1&sortBy=submissions 

CPP solution belo 👇👇 
*/ 

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here 
        
        // sort the two arrays first and then compare . 
        
        sort(A.begin(), A.end()); 
        sort(B.begin(), B.end());
        
        if(A == B)
            return 1;
            
        else 
            return 0;
        
        
    }
};

// time complexity:- O(n log n) -> same as that of required for the sorting function. 

// space complexity:- O(1) -> no xtra space used for sorting... everthing happens in the same place. 
