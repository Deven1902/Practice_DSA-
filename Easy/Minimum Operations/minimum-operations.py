#User function Template for python3

class Solution:
    def minOperation(self, n):
        # code here 
        
        # res = 0
        # if n == 0:
        #     return res
        # elif n % 2 == 1:
        #     n -= 1
        #     res += 1
        # elif n%2==0:
        #     n/=2
        #     res+=1
        # return self.minOperation(res ,n) 
        
        steps = 0
        while n > 0 :
            if n%2 == 0 : # Even
                n = n//2 
            else :
                n = n - 1 # odd
            steps += 1
        return steps


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n = int(input())
        ob = Solution()
        print(ob.minOperation(n))
# } Driver Code Ends