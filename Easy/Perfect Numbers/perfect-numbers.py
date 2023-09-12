#User function Template for python3

class Solution:
    def isPerfectNumber(self, n):
        # code here 
        
        s=0
        if n==1:
            return 0
        
        else:
            for i in range(2,int(n**0.5)+1):
                if n%i==0:
                    s+=i
                    s+=n//i
                  
            if s+1==n:
                return 1
            
            else:
                return 0


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.isPerfectNumber(N))
# } Driver Code Ends