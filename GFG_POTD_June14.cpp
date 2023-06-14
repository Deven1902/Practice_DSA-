class Solution {
  public:
    long long maxDiamonds(int a[], int n, int k) {
        // code here
        
        // brute force approach.
        /*
        int ans=0;
        
        while(k--) {
            sort(a, a+n);
            ans = ans + a[n-1];
            a[n-1] = a[n-1]/2;
        }
        
        return ans;
        */
        
        // optimised solution using priority queue
        
        priority_queue<long long> q;
        
        long long cnt = 0;
        
        for(int i=0; i<n; i++) 
            q.push(a[i]);
            
        while(k--) {
            long long t = q.top();
            
            cnt += q.top();
            q.pop();
            q.push(t/2);
        }
        
        return cnt;
        
        // time complexity :- O(N log n) -> N time for storing elements in the PQ, 
        //                    next log n time for the while loop for down slicing the queue. 
        
        // space complexity:- O(n) -> extra space taken by the priority queue. 
    }
};
