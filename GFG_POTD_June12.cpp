class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        
        int l, h;
        
        for(int i=0; i<n; i++) {
            l=0; 
            h=i-1;
            
            while(l<=h) {
                price[i] = max(price[i], price[l] +  price[h]);
                l++;
                h--;
            }
        }
        
        return price[n-1];
    }
};
