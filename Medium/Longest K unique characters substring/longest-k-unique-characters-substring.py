#User function Template for python3

from collections import defaultdict

class Solution:

    def longestKSubstr(self, s, k):
        # code here
        
        cnt = defaultdict(int)

        ans = -1

        left = 0

        for right in range(len(s)):

            cnt[s[right]] += 1

            while left <= right and len(cnt) > k:

                cnt[s[left]] -= 1

                if cnt[s[left]] == 0:

                    cnt.pop(s[left])

                left += 1

            if len(cnt) == k:

                ans = max(ans, right-left+1)

        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        s = input()
        k = int(input())

        solObj = Solution()

        ans = solObj.longestKSubstr(s, k)

        print(ans)

# } Driver Code Ends