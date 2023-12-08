#User function Template for python3

import math

class Solution:
    def minNumber(self, arr,n):
        # code here
        
        def isPrime(n):
            if n==2 or n==3:
                return True
            if n<=1 or n%2==0 or n%3==0:
                return False
            end=int(n**.5+1)
            for i in range(5,end,6):
                if n%i==0 or n%(i+2)==0:
                    return False
            return True
            
        s=sum(arr)
        p=s
        while not isPrime(p):
            p+=1
        return p-s



#{ 
 # Driver Code Starts
#Initial Template for Python 3


t=int(input())
for _ in range(0,t):
    n=int(input())
 #    l=list(map(int,input().split()))
 #    n=l[0]
 #    m=l[1]
    a=list(map(int,input().split()))
   # k = int(input())
  #  b = list(map(int, input().split()))
    ob = Solution()
    ans=ob.minNumber(a,n)
    print(ans)

# } Driver Code Ends