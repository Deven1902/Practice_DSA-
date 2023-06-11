class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        
        for(int i=0; i < k; i++) {
            a[updates[i] - 1]++;
        }
        
        for(int i=1; i<n; i++) {
            a[i] += a[i-1];
        }
        
        // for(int i=0; i<k; i++) {
        //     for(int j=updates[i]-1; j<n; j++) {
        //         a[j]++;
        //     }
        // }
        
        // for(int j=0;j<k;j++){
        //     int up = updates[j]-1;
        //     for(int i=up;i<n;i++){
        //             arr[i]+=1;
        //     }
        // }
    }
};
