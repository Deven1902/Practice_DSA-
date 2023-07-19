#User function Template for python3

class Solution:

    def longestPalinSubseq(self, S):
        # code here
        
        n = len(s)
        
        memo = {}
        def lps(l, r):
            if (l,r) in memo:
                return memo[(l,r)]
            if l > r:
                return 0
            if l == r:
                return 1

            if s[l] == s[r]:
                memo[(l,r)] = lps(l + 1, r - 1) + 2
            else:
                memo[(l,r)] = max(lps(l, r - 1), lps(l + 1, r))
            return memo[(l, r)]

        return lps(0, n - 1)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        ob = Solution()
        ans = ob.longestPalinSubseq(s)
        print(ans)
# } Driver Code Ends