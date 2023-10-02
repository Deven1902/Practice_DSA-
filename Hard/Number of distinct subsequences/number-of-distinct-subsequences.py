#User function Template for python3

class Solution:
	def distinctSubsequences(self, S):
		# code here
		
		dp = [0]*(len(S)+1)
        dp[0] = 1
        
        reg = dict()
        for i in range(1,len(dp)):
            dp[i] = 2*dp[i-1] % (10**9 + 7)
            cur = S[i-1]
            if cur in reg.keys():
                # get last time seen this char
                last_time_seen_cur = reg[cur]
                dp[i] = (dp[i] - dp[last_time_seen_cur-1]) % (10**9 + 7)
            reg[cur] = i
        return dp[-1]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		s = input()

		ob = Solution()
		answer = ob.distinctSubsequences(s)
		print(answer)

# } Driver Code Ends