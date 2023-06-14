class Solution {
  public:
    long long maxDiamonds(int a[], int n, int k) {
        // code here
        
        // brute force approach.
        
        int ans=0;
        
        while(k--) {
            sort(a, a+n);
            ans = ans + a[n-1];
            a[n-1] = a[n-1]/2;
        }
        
        return ans;
    }
};
