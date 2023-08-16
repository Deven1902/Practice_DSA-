
# formula == Catalan(n) = prod( ((n+k)/k), k=2..n ) 

class Solution:
    def findCatalan(self, n : int) -> int:
        # code here
        
        from functools import reduce
        MOD = 10**9+7
        
        # Catalan(n) = for k=2 to n: mul((n+k)/k)
        
        def mulm(a,b): return (a*b) % MOD
        numer = reduce( mulm, range(n+2, 2*n+1) )
        den = reduce( mulm, range(2, n+1) )
        ans = (numer * pow(den, MOD-2, MOD) ) % MOD
        return ans



#{ 
 # Driver Code Starts
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        obj = Solution()
        res = obj.findCatalan(n)
        
        print(res)
        

# } Driver Code Ends