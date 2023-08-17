#User function Template for python3

import heapq
class Solution:
    def smallestRange(self, KSortedArray, n, k):
        # code here
        # print
        
        myl=[]
        #largest element in heap
        rangeMax=float('-inf')
        
        for i in range(k):
            #Element in matrix,index of elements array in matrix(row index), index of element in array(col index)
            #Add all first elements of all arrays into heap
            myl.append((KSortedArray[i][0],i,0))
            if KSortedArray[i][0]>rangeMax:
                rangeMax=KSortedArray[i][0]
        
        heapq.heapify(myl)
        
        diff=float('inf')
        inner=0
        outer=0
        
        while inner<n:
            curr=heapq.heappop(myl)
            
            #Smallest element (that was) in heap
            rangeMin=curr[0]
            
            currsum=rangeMax-rangeMin
            
            #Smallest range must have least difference of max and min elements
            if currsum<diff:
                diff=currsum
                res=[rangeMin,rangeMax]
                
            #Smallest range can be of '0' difference, so if found, no need to explore further
            if diff==0:
                break
            
            #Add the next element from the popped(curr, which is the smallest,) elements array(row), so that
            #interval CAN be shortened (for eg: if the next element is smaller than or equal to largest element in heap)
            outer=curr[1]
            inner=curr[2]+1
            if inner<n:
                heapq.heappush(myl,(KSortedArray[outer][inner],outer,inner))
                if KSortedArray[outer][inner]>rangeMax:
                    rangeMax=KSortedArray[outer][inner]
            else:
                break
        
        return res

#{ 
 # Driver Code Starts
#Initial Template for Python 3

t=int(input())
for _ in range(t):
    line=input().strip().split()
    n=int(line[0])
    k=int(line[1])
    numbers=[]
    for i in range(k):
        numbers.append([int(x) for x in input().strip().split()])
    r = Solution().smallestRange(numbers, n, k)
    print(r[0],r[1])
# } Driver Code Ends