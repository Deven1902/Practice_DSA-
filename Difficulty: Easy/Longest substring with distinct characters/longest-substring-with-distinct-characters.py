#User function Template for python3

class Solution:
    def longestUniqueSubstr(self, s):
        # code here 
        
        res_set = set()
        res = 0
        l = 0
        n = len(s)
        for i in range(0,n):
            while s[i] in res_set:
                res_set.remove(s[l])
                l+=1
            res_set.add(s[i])
            res = max(res,i-l+1)
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        s = input()

        solObj = Solution()

        ans = solObj.longestUniqueSubstr(s)

        print(ans)

        print("~")
# } Driver Code Ends