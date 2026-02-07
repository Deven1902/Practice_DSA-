class Solution:
    def maxPerimeter(self, arr):
        #code here. 
        # ans = -1
        # n = len(arr) 
        # for i in range(n): 
        #     for j in range(i+1, n):
        #         for k in range(j+1, n):
        #             if arr[i] + arr[j] > arr[k] and arr[j] + arr[k] > arr[i] and arr[k] + arr[i] > arr[j]:
        #                 ans = max(ans, arr[i] + arr[j] + arr[k])
        
        # return ans 
        
        # ans = -1 
        n = len(arr) 
        
        arr.sort() 
        arr.reverse() 
        
        for i in range(n-2):
            if arr[i] < arr[i + 1] + arr[i + 2]: 
                return arr[i] + arr[i + 1] + arr[i + 2] 
                
        return -1