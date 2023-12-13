#User function Template for python3
class Solution:

	def countStrings(self,n):
    	# code here
    	
    	cur0,cur1=1,1
        prv0,prv1=cur0,cur1
        for i in range(1,n):
            cur0=(prv0+prv1)%(10**9+7)
            cur1=prv0
            prv0,prv1=cur0,cur1
        return (cur0+cur1)%(10**9+7)


#{ 
 # Driver Code Starts
#Initial Template for Python 3



# Driver code 
if __name__ == "__main__": 		
    tc=int(input())
    while tc > 0:
        n=int(input())
        ob = Solution()
        ans = ob.countStrings( n)
        print(ans)
        tc=tc-1
# } Driver Code Ends