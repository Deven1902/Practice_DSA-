#User function Template for python3

# apporach :- DP 

'''
    1. Initialize a dynamic programming array, dp, with 0-based indexing.
    2. Set dp[0] to 1 because there is one way to achieve a sum of 0, which is by choosing an empty subset.
    3. Iterate through the elements in the input array numbers.
    4. For each element number, iterate through the possible sums in reverse order, from targetSum down to number.
    5. Calculate the count of perfect sums for the current sum by adding the count of perfect sums for (currentSum - number). Update dp[currentSum] accordingly.
    6. Finally, return dp[targetSum] as the count of perfect sums for the target sum, modulo 10^9 + 7.
'''


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
