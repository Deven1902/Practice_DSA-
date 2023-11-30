#User function Template for python3

class Solution:
    def minimumStep (self, n):
        #complete the function here
        
        ans = -2
        while n:
            ans += (n%3)+1
            n//=3
            
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        ob = Solution()
        print(ob.minimumStep(n))
# } Driver Code Ends