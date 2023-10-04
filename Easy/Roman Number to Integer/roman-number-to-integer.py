#User function Template for python3

class Solution:
    def romanToDecimal(self, S): 
        # code here
        
        mapping = {'I': 1, 'V': 5,'X': 10,'L' :50,'C': 100,'D': 500,'M': 1000}
        prev = 0
        n = 0
        
        for i in S:
            t = mapping[i]
            if t > prev:
                n -= prev
                t = t-prev
            n += t
            prev = t
        
        return n


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t = int(input())
    for _ in range(t):
        ob = Solution()
        S = input()
        print(ob.romanToDecimal(S))
# } Driver Code Ends