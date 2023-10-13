#User function Template for python3

class Solution:
    def indexes(self, v, x):
        # Your code goes here
        
        s = 0
        e = len(v) -1
        temp=[-1, -1]
        
        # first occurence. 
        while(s<=e):
            mid = (s+e)//2
            
            if v[mid] == x:
                temp[0] = mid
                e = mid -1
                
            elif v[mid] < x:
                s = mid+1
                
            else:
                e = mid -1
    
        # last occurence. 
        s =0;
        e = len(v) -1
        
        while(s<=e):
            mid = (s+e)//2
            
            if v[mid] == x:
                temp[1] = mid
                s = mid +1
                
            elif v[mid] < x:
                s = mid+1
                
            else:
                e = mid -1
                
        return temp;


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        k = int(input())
        obj = Solution()
        ans = obj.indexes(a, k)
        if ans[0]==-1 and ans[1]==-1:
            print(-1)
        else:
            print(ans[0], end=' ')
            print(ans[1])

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends