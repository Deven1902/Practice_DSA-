#User function Template for python3

class Solution:
    
    #Function to return list of integers that form the boundary 
    #traversal of the matrix in a clockwise manner.
    def BoundaryTraversal(self,matrix, n, m):
        # code here 
        
        k = 4
        l = 4 * (m + n - 1) if min(m, n) > 1 else max(m, n)
        dx = [0, 1, 0, -1]
        dy = [1, 0, -1, 0]
        x, y = 0, -1
        res = []
        for d in range(k):
            for i in range(n):
                x += dx[d % 4]
                y += dy[d % 4]
                res.append(matrix[x][y])
            m, n = n, m - 1
        return res[:l]
