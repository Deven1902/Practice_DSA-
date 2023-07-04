class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        // this is a sliding window approach! 
        
        int cnt = 0;
        long long prod=1;
        int l=0, r=0; // left and right pointers 
        
        while(r<n) {
            prod*=a[r];
            
            while(prod>=k && l<=r) {
                prod = prod/a[l];  //divide to slide the window
                l++;
            }
            
            cnt+=r-l+1;
            r++;
        }
        
        return cnt;
    }
};
