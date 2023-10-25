class Solution:
    def knapSack(self, N, W, val, wt):
        # code here
        
        dp=[[0]*(W+1) for _ in range(N+1)]
        for y in range(1,N+1):
            for x in range(1,W+1):
                dp[y][x]=dp[y-1][x]
                if x-wt[y-1]>=0:
                    dp[y][x]=max(dp[y][x],dp[y-1][x-wt[y-1]]+val[y-1],dp[y][x-wt[y-1]]+val[y-1])
                    
        return dp[-1][-1]
