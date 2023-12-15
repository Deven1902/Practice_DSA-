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

# time complexity:- o(N) 
# space complexity:- O(N) -> Dp list stores valyes, which takes O(N) space. 
