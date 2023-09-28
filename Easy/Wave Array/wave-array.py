from typing import List


class Solution:
    def convertToWave(self, n : int, a : List[int]) -> None:
        # code here
        
        for i in range(1,n,2):
            if a[i]>a[i-1]:
                temp=a[i]
                a[i]=a[i-1]
                a[i-1]=temp
            if a[i]>a[i-1] and i<=n-2:
                temp=a[i]
                a[i]=a[i+1]
                a[i+1]=temp
        return a

# time complexity:- O(n). 

# space complexity:- O(1). 
