
class Solution:
    def countDistinct(self, arr, k):
        # Code here
        
        res=[]
        for i in range(len(arr) - k + 1):
            sets = set(arr[i:i+k])
            res.append(len(sets))
            
        return res


#{ 
 # Driver Code Starts
import sys
from collections import defaultdict
if __name__ == '__main__':
    input = sys.stdin.read
    data = input().splitlines()
    t = int(data[0])
    index = 1
    while t > 0:
        arr = list(map(int, data[index].strip().split()))
        index += 1
        k = int(data[index])
        index += 1

        ob = Solution()
        res = ob.countDistinct(arr, k)

        for element in res:
            print(element, end=" ")
        print()
        print("~")

        t -= 1

# } Driver Code Ends