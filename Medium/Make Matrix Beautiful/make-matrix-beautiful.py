#User function Template for python3

class Solution:
    def findMinOpeartion(self, matrix, n):
        # Code here
        
        total=0
        row=[0]*n
        col=[0]*n
        
        for i in range(n):
            for j in range(n):
                total+=matrix[i][j]
                row[i]+=matrix[i][j]
                col[j]+=matrix[i][j]
                
        rowm=max(row)
        colm=max(col)
        return max(rowm,colm)*n-total      


#{ 
 # Driver Code Starts

#Initial Template for Python 3

for _ in range(int(input())):
    n = int(input())
    matrix = [list(map(int,input().split())) for _ in range(n)]
    ob = Solution()
    print(ob.findMinOpeartion(matrix, n))
# } Driver Code Ends