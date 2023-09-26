#User function Template for python3

# arr[] : int input array of integers
# k : the quadruple sum required

from collections import defaultdict

class Solution:
    def fourSum(self, arr, k):
        # code here
        
        n = len(arr)
        d = defaultdict(list)
        for i in range(n - 1):
            for j in range(i + 1, n):
                d[arr[i] + arr[j]].append((i, j))
        output = set()
        visited = set()
        for s, ijs in d.items():
            if s in visited:
                continue
            r = k - s
            if r not in d:
                continue
            visited.add(r)
            for i, j in ijs:
                for kl in d[r]:
                    if i not in kl and j not in kl:
                        output.add(tuple(sorted(
                            (arr[i], arr[j], arr[kl[0]], arr[kl[1]])
                        )))
        return sorted(output)


#{ 
 # Driver Code Starts
#Initial Template for Python 3


#Main
if __name__=='__main__':
    t = int(input())
    while t:
        t-=1
        n, k=map(int,input().split())
        # print(n, k)
        a=list(map(int,input().strip().split()))[:n]
        # print(a)
        ob=Solution()
        ans=ob.fourSum(a, k)
        # print(ans)
        for v in ans:
            for u in v:
                print(u, end=" ")
            print("$", end="")
        if(len(ans)==0):
            print(-1, end="")
        print()
        
        

# } Driver Code Ends