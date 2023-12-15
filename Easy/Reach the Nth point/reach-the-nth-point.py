#User function Template for python3

class Solution:
	def nthPoint(self,n):
		# Code here
		
 		# base case
		dp=[1,2]+[0]*(n-2)
		mod=10**9+7
		
		# recursion here
		for i in range(2,n):
		    dp[i]=(dp[i-1]+dp[i-2])%mod
		
 		# return ans
		return dp[n-1]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		ob = Solution();
		ans = ob.nthPoint(n)
		print(ans)
# } Driver Code Ends