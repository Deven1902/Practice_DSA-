#User function Template for python3



#approach 

'''
1) To obtain the maximum absolute difference between the elements of the array
2) Sort the array
3) Initialise the result (res) with 0
4) Start adding the absolute difference of the first and last elements of the array
5) (which means adding the absolute difference of the maximum and minimum elements of the array each time)
6) return result (res)

'''

def maxSum(arr,n):
    # code here
    
    arr.sort()
    res = 0
    
    for i in range(n):
        res+=abs(arr[i]-arr[n-i-1])
        
    return res

#{ 
 # Driver Code Starts
#Initial Template for Python 3



t=int(input())
for _ in range(0,t):
    n=int(input())
    # x=list(map(int,input().split()))
    # n=x[0]
    # k=x[1]
    arr = list(map(int,input().split()))
    ans=maxSum(arr,n)
    print(ans)

# } Driver Code Ends
