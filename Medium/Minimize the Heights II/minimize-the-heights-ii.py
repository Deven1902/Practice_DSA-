#User function Template for python3

class Solution:
    def getMinDiff(self, arr, n, k):
        # code here
        
        arr.sort()
    
        result = arr[n - 1] - arr[0]
    
        for i in range(n - 1):
            max_height = max(arr[i] + k, arr[n - 1] - k)
            min_height = min(arr[0] + k, arr[i + 1] - k)
        
            if min_height < 0:
                continue
            result = min(result, max_height - min_height)
    
        return result  


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        k = int(input())
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.getMinDiff(arr, n, k)
        print(ans)
        tc -= 1

# } Driver Code Ends