#User function Template for python3

class Solution:
    
    #Function to check whether there is a subarray present with 0-sum or not.
    def subArrayExists(self,arr,n):
        ##Your code here
        #Return true or false
        
        if n == 0:
            return False
        if n == 1 and arr[0] <0:
            return False
        setofnum = set()
        sums = 0
        for i in range(n):
            sums +=arr[i]
            if sums == 0 or sums in setofnum:
                return True
            setofnum.add(sums)
        
        return False


#{ 
 # Driver Code Starts
#Initial Template for Python 3



def main():
    T=int(input())
    while(T>0):
        
        n=int(input())
        arr=[int(x) for x in input().strip().split()]
        if(Solution().subArrayExists(arr,n)):
            print("Yes")
        else:
            print("No")
        
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends