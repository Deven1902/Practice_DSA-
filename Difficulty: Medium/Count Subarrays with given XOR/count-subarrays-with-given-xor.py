class Solution:
    def subarrayXor(self, arr, k):
        # code here
        xor = 0
        count = 0
        n = len(arr)
        d = {0:1}
        
        for i in range(n):
            
            xor ^= arr[i]
            
            if xor^k in d:
                count += d[xor^k]
            if xor in d:
                d[xor] += 1
            else:
                d[xor] = 1
        
        return count


#{ 
 # Driver Code Starts
if __name__ == "__main__":
    tc = int(input())

    for _ in range(tc):
        arr = list(map(int, input().split()))
        k = int(input())

        obj = Solution()
        print(obj.subarrayXor(arr, k))
        print("~")

# } Driver Code Ends