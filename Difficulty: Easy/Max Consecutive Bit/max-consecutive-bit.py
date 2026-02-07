class Solution:
    def maxConsecBits(self, arr):
        #code here 
        
        n = len(arr) 
        cnt = 1
        maxCnt = 0 
        
        for i in range(1, n):
            if arr[i] == arr[i-1]:
                cnt+=1
            else:
                maxCnt = max(maxCnt, cnt)
                cnt=1 
                
        return max(maxCnt, cnt)