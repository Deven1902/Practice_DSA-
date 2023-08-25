#User function Template for python3

# arr[] : int input array of integers
# k : the quadruple sum required
class Solution:
    def fourSum(self, arr, k):
        # code here
        
        n = len(arr)
        arr.sort()
        res = []

        for i in range(n-3):
            # avoid the duplicates while moving i
            if i > 0 and arr[i] == arr[i - 1]:
                continue
            for j in range(i+1, n-2):
                # avoid the duplicates while moving j
                if j > i + 1 and arr[j] == arr[j - 1]:
                    continue
                lo = j + 1
                hi = n - 1
                while lo < hi:
                    temp = arr[i] + arr[j] + arr[lo] + arr[hi]
                    if temp == k:
                        res += [arr[i], arr[j], arr[lo], arr[hi]],

                        # skip duplicates
                        while lo < hi and arr[lo] == arr[lo + 1]:
                            lo += 1
                        lo += 1
                        while lo < hi and arr[hi] == arr[hi - 1]:
                            hi -= 1
                        hi -= 1
                    elif temp < k:
                        lo += 1
                    else:
                        hi -= 1
        return res


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