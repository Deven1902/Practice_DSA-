class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // pesudo code:- 
        
        /*
        
            indeitfy input params
            initiliaze max and min
            loop thorugh prices and update min if found smaller
            
            calculate potential profit and add that to max if the current price is larger than mini
            
            update min to current price.
            
            return max.
        */
        
        // code here
        
        int maxi=0, mini=INT_MAX;
        
        for(int i=0; i<n; i++) {
            if(prices[i]>mini)
                maxi+=prices[i]-mini;
                
            mini = prices[i];
        }
        return maxi;
    }
    
    // time complexity-> O(N)
    
    // space complexity->O(1)
};
