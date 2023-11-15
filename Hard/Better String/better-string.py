#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    
    def distinct_subsequences(self, s):
        n = len(s)
        mod = 10**9 + 7
        dp = [0] * (n + 1)
        dp[0] = 1
        last_occurrence = {}
        for i in range(1, n + 1):
            dp[i] = (2 * dp[i - 1]) % mod
            if s[i - 1] in last_occurrence:
                dp[i] = (dp[i] - dp[last_occurrence[s[i - 1]] - 1] + mod) % mod
            last_occurrence[s[i - 1]] = i

        return dp[n]

    def betterString(self, str1, str2):
        # Code here
        
        return str1 if self.distinct_subsequences(str1)>=self.distinct_subsequences(str2) else str2
        

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        str1 = input()
        str2 = input()
        ob = Solution()
        res = ob.betterString(str1, str2)
        print(res)
# } Driver Code Ends