class Solution:
    def missingNum(self, arr):
        # code here
        
        n = len(arr) + 1 
        tot = n*(n+1)>>1
        return tot - sum(arr)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int(input())
for _ in range(0, t):
    arr = list(map(int, input().split()))
    s = Solution().missingNum(arr)
    print(s)

    print("~")
# } Driver Code Ends