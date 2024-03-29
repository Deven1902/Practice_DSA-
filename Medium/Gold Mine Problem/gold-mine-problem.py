# User function Template for Python3

class Solution:
    def maxGold(self, n, m, mine):
        # code here
        
        dp=[[0] * m for _ in range(n)]
        
        for i in range(n):
            dp[i][m-1]=mine[i][m-1]
            
        for j in range(m-2,-1,-1):
            for i in range(n):
                mu=dp[i-1][j+1] if i-1>=0 else 0
                mr=dp[i][j+1]
                md=dp[i+1][j+1] if i+1<n else 0
                dp[i][j]=mine[i][j]+max(mu,mr,md)
        maxi=0
        
        for i in range(n):
            maxi=max(maxi,dp[i][0])
            
        return maxi


#{ 
 # Driver Code Starts
# Initial Template for Python3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, m = [int(x) for x in input().split()]
        tarr = [int(x) for x in input().split()]
        M = []
        j = 0
        for i in range (n):
            M.append(tarr[j:j + m])
            j = j+m
        
        ob = Solution()
        print(ob.maxGold(n, m, M))
# } Driver Code Ends