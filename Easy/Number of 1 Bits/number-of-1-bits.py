#User function Template for python3

class Solution:
	def setBits(self, N):
		# code here
		
		b = bin(N)[2:]
		return b.count('1')
# explanation:- Python bin () function returns the binary string of a given integer.

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.setBits(N)
		print(ans)




# } Driver Code Ends
