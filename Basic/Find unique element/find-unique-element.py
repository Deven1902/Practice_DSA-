class Solution:
    def findUnique(self, a, n, k): 
        #Code here
        
        count_dict={}
        for i in range(n):
            if a[i] in count_dict:
                count_dict[a[i]]+=1
            else:
                count_dict[a[i]]=1
        for key, value in count_dict.items():
            if value%k != 0:
                return key


#{ 
 # Driver Code Starts
import sys 

if __name__=='__main__':
    T = int(input())

    for _ in range(T):
        n,k=[int(x) for x in input().split()]
        a = [int(x) for x in input().split()]

        print(Solution().findUnique(a,n,k))
# } Driver Code Ends