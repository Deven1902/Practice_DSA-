# User function Template for python3

class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self,a, n):
        # Your code here
        
        if n == 0:
            return -1
        if n == 1:
            return 1
    
        for i in range(1, n):
            a[i] = a[i] + a[i - 1]
        # print(A)
        tsum, lsum, rsum = a[n - 1], 0, 0
        ans = -1
        for i in range(1, n - 1):
            lsum = a[i - 1]
            rsum = tsum - a[i]
    
            if lsum == rsum:
                ans = i + 1
                break
    
        return ans



#{ 
 # Driver Code Starts
# Initial Template for Python 3

import math


def main():

    T = int(input())

    while(T > 0):

        N = int(input())

        A = [int(x) for x in input().strip().split()]
        ob=Solution()

        print(ob.equilibriumPoint(A, N))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends