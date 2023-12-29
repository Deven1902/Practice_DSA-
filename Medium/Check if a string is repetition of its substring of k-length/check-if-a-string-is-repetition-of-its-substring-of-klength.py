#User function Template for python3

from collections import defaultdict

class Solution:
	def kSubstrConcat(self, n, s, k):
		# Your Code Here
		
		if n%k!=0:
            return 0
            
        cnt=defaultdict(int)
        for i in range(n//k):
            cnt[s[i*k:(i+1)*k]]+=1
            if len(cnt)>2:
                return 0
                
        return 1 if len(cnt)<2 or len(cnt)>=2 and min(cnt.values())==1 else 0


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
	t = int (input ())
	for tc in range (t):
		n = int (input ())
		s = input()
		k = int(input())
		ob = Solution()
		print(ob.kSubstrConcat(n,s,k))

# } Driver Code Ends