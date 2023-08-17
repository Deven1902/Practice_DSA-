#User function Template for python3

class Solution:
    def MedianOfArrays(self, array1, array2):
            #code here
            
            arr = array1 + array2
            arr = sorted(arr)
            if len(arr)%2==0: # it is odd so mid element is median
                A = (arr[len(arr)//2]+ arr[len(arr)//2-1])/2
                s = str(A)
                if s[-1]== '0':
                    return int(A)
                else:
                    return A
            return arr[len(arr)//2]


#{ 
 # Driver Code Starts
if __name__ == '__main__':
    tcs=int(input())

    for _ in range(tcs):
        m = input()
        arr1=[int(x) for x in input().split()]
        n = input()
        arr2=[int(x) for x in input().split()]
        
        
        ob = Solution()
        print(ob.MedianOfArrays(arr1,arr2))

# } Driver Code Ends