#User function Template for python3

import heapq

class Solution:

    def minValue(self, s, k):

# The concept used here is to decrease the frequency of character which is maximum thats why using heap(priority queue) to get max frequency every time so we can decrease it."""

        # code here

        # create hash map to store frequencies

        h=[0]*26

    

        # store frequencies of each element

        for i in s:

            h[ord(i)-97]+=1

    

        q=[]

        for i in range(len(h)):

            if h[i]!=0:

                q.append(-1*h[i]) # we will create max-heap so multiply each value with -1

    

        # create heapq (priority queue)

        heapq.heapify(q)

        ans=0

        while k:

            top=heapq.heappop(q)

            top=-1*(abs(top)-1)

            k-=1

            heapq.heappush(q,top)

    

        while len(q)!=0:

            top=q.pop(0)

            ans+=top*top

        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        k = int(input())
        
        ob = Solution()
        print(ob.minValue(s, k))
# } Driver Code Ends