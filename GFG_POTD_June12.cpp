class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        
        int l, h;
        
        for(int i=0; i<n; i++) {
            l=0; 
            h=i-1;
            
            while(l<=h) {
                price[i] = max(price[i], price[l] + price[h]);
                l++;
                h--;
            }
        }
        
        return price[n-1];
    }
        // brute force solution below. 
        
        
        //alternative recursive appoarch. 
        
        /*
        if(n<=0)
            return 0; // this is base case. 
            
        int ans = INT_MIN;
        for(int i=0; i<n; i++) {
            int cut = i+1;
            int cur_ans = price[i] + cutRod(price, n - cut);
            
            ans = max(ans, cur_ans);
        }
        
        return ans;
    }
    */
    // brute force solution gives TLE. 
    
    // time complexity:- O(N^N) -. exponential as we are covering all the prices for all the possible cuts. 
    // space complexity:- O(1) -> no extra space used. 
    
};
