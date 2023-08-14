#User function Template for python3

class Solution:
    def match(self, wild, patt):
        # code here
        
           n = len(patt)
           m = len(wild)
           
           dp = [[0 for i in range(m+1)] for j in range(n+1)]
           
           dp[0][0] = 1
           
           i = 0
           while i < m and wild[i] == "*":
               dp[0][i+1] = 1 
               i += 1
               
           for i in range(1, n+1):
               for j in range(1, m+1):
                   
                   if wild[j-1] == "*":
                       dp[i][j] = max(dp[i][j-1], dp[i-1][j-1], dp[i-1][j])
                       
                   elif patt[i-1] == wild[j-1] or wild[j-1] == "?": 
                       dp[i][j] = dp[i-1][j-1]
                       
                   
                   
           return dp[n][m]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range (t):
        wild = input()
        pattern = input()
        
        ob = Solution()
        if(ob.match(wild, pattern)):
            print("Yes")
        else:
            print("No")
# } Driver Code Ends