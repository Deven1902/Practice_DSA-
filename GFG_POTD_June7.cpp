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
