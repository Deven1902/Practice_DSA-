#User function Template for python3

class Solution:
    def countWays(self,n,k):
        #code here.
        
        M = 10**9+7
        same, diff = 0, k
        for i in range(1, n):
            diff, same = (same+diff)*(k-1)%M, diff
        return (same+diff)%M



#{ 
 # Driver Code Starts

#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    x=list(map(int,input().split()))
    n=x[0]
    k=x[1]
    ob = Solution()
    ans=ob.countWays(n,k)
    print(ans)

# } Driver Code Ends