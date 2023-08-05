#User function Template for python3

class Solution:

    def findMinDiff(self, a, n, m):
        # code here
        
        a.sort()
        diffMin = a[n-1] - a[0]
        for i in range(len(a) - m +1):
            diffMin = min(diffMin, a[i+m-1] - a[i])
            
        return diffMin


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        N = int(input())
        A = [int(x) for x in input().split()]
        M = int(input())


        solObj = Solution()

        print(solObj.findMinDiff(A,N,M))
# } Driver Code Ends