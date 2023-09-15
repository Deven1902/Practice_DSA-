# User function Template for Python3

class Solution:
    def equalPartition(self, N, arr):
        # code here
        
        # Approach
        
        '''
            the problem is solvable if and only if the sum of the whole array is even. 
            
            Then the actual task is to check if there exists a subarray with sum equal to the half of the whole sum.
            
            very similar to the yesterday's problem. 
        '''
        # check the whole sum
        s=sum(arr)
        if s%2==1:
            return 0
        else:
            target=s//2
            
        # initialization for dynamic programming
		dp=[[0]*(target+1) for _ in range(N+1)]
		dp[0]=[1]+[0]*target
		
		# recursive scheme, stop if target is achieved
		i=1
		while i<N:
		    for j in range(target+1):
		        if j>=arr[i-1]:
		            dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]]
		        else:
		            dp[i][j]=dp[i-1][j]
		    if dp[i][target]>0:
		        return 1
		    i=i+1
		
		return 0


#{ 
 # Driver Code Starts
# Initial Template for Python3

import sys
input = sys.stdin.readline
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        arr = input().split()
        for it in range(N):
            arr[it] = int(arr[it])
        
        ob = Solution()
        if (ob.equalPartition(N, arr) == 1):
            print("YES")
        else:
            print("NO")
# } Driver Code Ends