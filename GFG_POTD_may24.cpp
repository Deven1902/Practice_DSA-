class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
        
        /* 
           these are the two cases that we will be using to solve our problem. 
           n is a divisor of sum
           n <= N 
        */
        
        // int sum = 0; -> converted int to long due to test case limitations
        
        long sum = 0;
        
        for(int i : arr) 
            sum += i;
            
        for(int i = N; i > 0; i--) {
            if(sum % i == 0) 
                return i; 
        }
        
        return 0;
    }
};

// time complexity -> O(N) 
// space complexity -> O(1)
