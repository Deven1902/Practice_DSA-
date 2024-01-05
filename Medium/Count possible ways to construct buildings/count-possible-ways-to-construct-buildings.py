#User function Template for python3

class Solution:
	def TotalWays(self, N):
		# Code here
		
		mod = 10**9 + 7
        prev1, prev2 = 1, 1

        for i in range(1, N+1):
            curr = (prev1 + prev2) % mod
            prev2, prev1 = prev1, curr

        return (prev1 * prev1) % mod


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.TotalWays(N)
		print(ans)
# } Driver Code Ends