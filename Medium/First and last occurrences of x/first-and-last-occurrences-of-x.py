#User function Template for python3


class Solution:
    def find(self, arr, n, x):
        
        # code here
        
        if(x not in arr):

            return [-1,-1]

        else:

          arr_new=[];

          arr_new.append(arr.index(x))

          arr=arr[::-1]

          arr_new.append(n-arr.index(x)-1)

          return arr_new


#{ 
 # Driver Code Starts
t=int(input())
for _ in range(0,t):
    l=list(map(int,input().split()))
    n=l[0]
    x=l[1]
    arr=list(map(int,input().split()))
    ob = Solution()
    ans=ob.find(arr,n,x)
    print(*ans)
# } Driver Code Ends