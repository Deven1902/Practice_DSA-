#User function Template for python3

class Solution:
    def splitArray(self, arr, N, K):
        # code here 
        
        sm=sum(arr)
        def ok(sm):
            nonlocal arr,N,K
            k=0
            tot=0
            for v in arr:
                tot+=v
                if tot>sm:
                    tot=v
                    k+=1
                    if k>K-1:
                        return False
            return True
        l=max(arr)
        r=sm+1
        while l<r:
            m=l+(r-l)//2
            if ok(m):
                r=m
            else:
                l=m+1
        return l


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,K=map(int,input().split())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.splitArray(arr,N,K))
# } Driver Code Ends