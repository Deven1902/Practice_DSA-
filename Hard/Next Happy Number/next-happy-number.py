#User function Template for python3


class Solution:
    def nextHappy (self, N):
        # code here
        
        m = {}
        def happy(n, seen):
            if n == 1:
                return True
            if n in m:
                return m[n]
            if n in seen:
                return False
            seen.add(n)
            nxt = 0
            while n != 0:
                n, r = divmod(n, 10)
                nxt += r*r
            m[n] = happy(nxt, seen)
            return m[n]
        n = N+1
        while True:
            if happy(n, set()):
                return n
            n += 1
        return 0


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())

        ob = Solution()
        print(ob.nextHappy(N))
# } Driver Code Ends