#User function Template for python3

class Solution:
    def search(self, pat, txt):
        # code here
        
        # this is brute force, and it works
        n=len(pat)
        ans=[]
        for i in range(len(txt)-n+1):
            if txt[i:i+n]==pat:
                ans.append(i+1)
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        patt = input().strip()
        ob = Solution()
        ans = ob.search(patt, s)
        if len(ans)==0:
            print(-1,end="")
        for value in ans:
            print(value,end = ' ')
        print()
# } Driver Code Ends