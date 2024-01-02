#User function Template for python3

from itertools import accumulate
from collections import deque
        
class Solution():
    def maxSumWithK(self, a, n, k):
        # Code here
        
        a = list(accumulate(a))
        
        maxs = deque()
        r = float('-inf')
        for i in range(n-1, -1, -1):
            if a[i] > r:
                r = max(a[i], r)
                maxs.appendleft((r, i))
            
        mins = [(0, -1)]
        for i, e in enumerate(a):
            if e < mins[-1][0]:
                mins.append((e, i))
        i, j = 0, 0
        
        ans = float('-inf')
        while i < len(mins) and j < len(maxs):
            v0, k0 = mins[i]
            v1, k1 = maxs[j]
            if k1-k0 >= k:
                ans = max(ans, v1 - v0)
                i += 1
            else:
                j += 1
        return ans
    
    
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        k = int(input())
        
        ob = Solution()
        print(ob.maxSumWithK(a, n, k))

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends