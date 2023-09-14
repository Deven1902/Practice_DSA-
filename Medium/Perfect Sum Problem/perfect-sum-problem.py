#User function Template for python3
class Solution:
	def perfectSum(self, arr, n, sum):
		# code here
		
		dp = [1] + [0] * sum   # stores the perfect sums.
		
        MOD = 10**9 + 7 

        for i in arr:
            # iterate thorugh arr in reverse
            for currSum in range(sum, i - 1, -1):
               
                # adding the count of perfect sums for (currentSum - number)
                dp[currSum] = (dp[currSum] + dp[currSum - i]) % MOD
        
        # Return perfect sum
        return dp[sum]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n,sum = input().split()
		n,sum = int(n),int(sum)
		arr = [int(x) for x in input().split()]
		ob = Solution()
		ans = ob.perfectSum(arr,n,sum)
		print(ans)

# } Driver Code Ends