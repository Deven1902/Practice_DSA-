#User function Template for python3

class Solution:
    def shortestDistance(self,N,M,A,X,Y):
        #code here
        
        from collections import deque
        if X == 0 and Y == 0:
            return 0
        else:
            queue = deque([(0, 0, 0)])
            visited = [[False] * M for _ in range(N)]
            visited[0][0] = True
        
            # Define possible movements (up, down, left, right)
            delta_x = [-1, 1, 0, 0]
            delta_y = [0, 0, -1, 1]
        
            while queue:
                current_x, current_y, steps = queue.popleft()
        
                if current_x == X and current_y == Y:
                    return steps
        
                for i in range(4):
                    new_x, new_y = current_x + delta_x[i], current_y + delta_y[i]
                    if self.is_valid_position(new_x, new_y, N, M, visited, A):
                        visited[new_x][new_y] = True
                        queue.append((new_x, new_y, steps + 1))
            return -1
            
    def is_valid_position(self, x, y, n, m, visited, matrix):
    # Check if the position (x, y) is valid and not visited
        return 0 <= x < n and 0 <= y < m and not visited[x][y] and matrix[x][y] == 1


#{ 
 # Driver Code Starts

#Initial Template for Python 3

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N,M=map(int,input().strip().split())
        a=[]
        for i in range(N):
            s=list(map(int,input().strip().split()))
            a.append(s)
        x,y=map(int,input().strip().split())    
        ob=Solution()
        print(ob.shortestDistance(N,M,a,x,y))
        
# } Driver Code Ends