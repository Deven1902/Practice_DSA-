class Solution:
    def thirdLargest(self,arr):
        # code here 
        n = len(arr) 
        
        arr.sort() 
        arr.reverse() 
        
        return arr[2]