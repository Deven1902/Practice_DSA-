#User function Template for python3

from collections import Counter

class Solution:
    def singleElement(self, arr, N):
        # code here 
        
        d=Counter(arr)
        for i in d.keys():
            if(d[i]%3) !=0:
                return i


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.singleElement(arr,N))
# } Driver Code Ends