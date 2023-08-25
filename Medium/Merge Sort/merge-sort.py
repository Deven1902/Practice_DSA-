#User function Template for python3

class Solution:
    def merge(self,arr, l, m, r): 
        # code here
        
        n1 = m - l+1
        n2 = r-m
        
        leftSubarray = [0] * n1
        rightSubarray = [0] * n2
        
        for x in range(n1):
            leftSubarray[x] = arr[l+x]
        for y in range(n2):
            rightSubarray[y] = arr[m+1+y]
        
        p = 0
        q = 0
        k = l
        
        while p<n1 and q<n2:
            if leftSubarray[p] <= rightSubarray[q]:
                arr[k] = leftSubarray[p]
                p += 1
            else:
                arr[k] = rightSubarray[q]
                q += 1
            k += 1
        while p < n1:
            arr[k] = leftSubarray[p]
            p += 1
            k += 1
    
        while q < n2:
            arr[k] = rightSubarray[q]
            q += 1
            k += 1
            
    def mergeSort(self,arr, l, r):
        #code here
        
        if l<r:
            mid = l+(r-l)//2  #conquer
            #recursive call for left subarray
            self.mergeSort(arr,l, mid)
            #recursive call for right subarray
            self.mergeSort(arr, mid+1, r)
            #combine merge procedure
            self.merge(arr,l, mid, r)
        return arr



#{ 
 # Driver Code Starts
#Initial Template for Python 3


import sys
input = sys.stdin.readline
if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        Solution().mergeSort(arr, 0, n-1)
        for i in range(n):
            print(arr[i],end=" ")
        print()
# } Driver Code Ends