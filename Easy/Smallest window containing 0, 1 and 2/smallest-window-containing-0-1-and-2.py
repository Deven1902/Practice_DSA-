#User function Template for python3

from math import inf

class Solution:
    def smallestSubstring(self, S):
        # Code here
        
        findString=False
        zeroIndex=-1
        oneIndex=-1
        twoIndex=-1
        minLength=float(inf)
        n=len(S)
        for i in range(n):
            if S[i]=='0':
                zeroIndex=i
            elif S[i]=='1':
                oneIndex=i
            else:
                twoIndex=i
                
            if zeroIndex!=-1 and oneIndex!=-1 and twoIndex!=-1:
                findString=True
                minLength = min(minLength, 1 + i - min(zeroIndex, min(oneIndex, twoIndex)))
            
        
        if findString:
            return minLength
        else:
            return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		S = input()
		ob = Solution()
		ans = ob.smallestSubstring(S)
		
		print(ans)



# } Driver Code Ends