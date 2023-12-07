#User function Template for python3

class Solution:
    def countSubarrays(self, a,n,L,R): 
        # Complete the function
        
        start=0
        ans=0
        res=0
        for i in range(n):
            if (a[i]>=L and a[i]<=R):
                res=i-start+1
            if (a[i]>r):
                res=0
                start=i+1
            ans=ans+res
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3



for _ in range(0,int(input())):
    n,l,r = map(int, input().strip().split())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    v = ob.countSubarrays(arr, n, l, r)
    print(v)
    
# } Driver Code Ends