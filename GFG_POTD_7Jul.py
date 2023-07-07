class Solution:
    
    #Function to merge the arrays.
    def merge(self,arr1,arr2,n,m):
        #code here
        
        # naive solution
        # time complexity is O((n+m)* nlog(n+m))
        # space complexity:- O(1)
        
        # pos1, pos2 = 0, 0
        # while pos1<n and pos2<m:
        #     if arr1[pos1]<=arr2[pos2]:pos1+=1
        #     else:
        #         arr1[pos1], arr2[pos2] = arr2[pos2], arr1[pos1]
        #         arr1.sort()
        #         arr2.sort()
        #         pos1, pos2 = 0, 0
        # return arr1, arr2
    
        # optimised solution:- 
        # time complexity:- O(n logn)
        # space complexity:- O(1)
        
        i, j = n-1, 0
        while (i>=0 and j<m) and arr1[i]>arr2[j]: arr1[i], arr2[j], i, j = arr2[j], arr1[i], i-1, j+1
        arr1.sort()
        arr2.sort()
