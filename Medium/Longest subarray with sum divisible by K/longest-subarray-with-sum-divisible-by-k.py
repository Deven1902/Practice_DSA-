#User function Template for python3
class Solution:
	def longSubarrWthSumDivByK (self,arr,  n, k) : 
		#Complete the function
		
		
		m = {0:-1}
        running, ans = 0, 0
        for i, e in enumerate(arr):
            running = (running+e)%k
            if running not in m:
                m[running] = i
            else:
                ans = max(ans, i-m[running%k])

        return ans




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

	for _ in range(0,int(input())):
		n, K = map(int ,input().split())
		arr = list(map(int,input().strip().split()))
		ob = Solution()
		res = ob.longSubarrWthSumDivByK(arr, n, K)
		print(res)




# } Driver Code Ends