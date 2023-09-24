
from collections import Counter
class Solution:
    def duplicates(self, arr, n): 
    	# code here
    	
    	arr.sort()
        i = 0
        a = []
        
        check = -1
        
        while(i < n-1):
            if(arr[i] == arr[i+1] and check != arr[i]):
                check = arr[i]
                a.append(check)
            i += 1
        
        if(len(a)): return a
        return [-1]
    	    


#{ 
 # Driver Code Starts
if(__name__=='__main__'):
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().duplicates(arr, n)
        for i in res:
            print(i,end=" ")
        print()



# } Driver Code Ends