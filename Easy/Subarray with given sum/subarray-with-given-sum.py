#User function Template for python3

#Function to find a continuous sub-array which adds up to a given number.
class Solution:
    def subArraySum(self,arr, n, s): 
       #Write your code here
       
       l = 0
       r = 0
       sum = arr[0] 
       while r < n:
            #print(l,r,sum)
            if sum == s:
                return [l+1,r+1]
            elif sum < s:
                r+=1
                if r == n:
                    return [-1]
                else:
                    sum+=arr[r]
                if arr[r] > s:
                    r = r+1
                    l = r
                    if l != n:
                        sum = arr[l]
            elif sum > s:
                if l<r:
                    sum -= arr[l]
                    l+=1
                else:
                    r=r+1
                    l=r
                    if l!= n:
                        sum = arr[l]
       return [-1]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

def main():
        T=int(input())
        while(T>0):
            
            NS=input().strip().split()
            N=int(NS[0])
            S=int(NS[1])
            
            A=list(map(int,input().split()))
            ob=Solution()
            ans=ob.subArraySum(A, N, S)
            
            for i in ans:
                print(i, end=" ")
                
            print()
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends