#User function Template for python3

from typing import List
from collections import deque

class Solution:    
    def numberOfEnclaves(self, grid: List[List[int]]) -> int:
        # code here
        
        q = deque()
        n=len(grid)
        m=len(grid[0])
        visit = [[0]*m for _ in range(n)]
        for i in range(n):
            for j in range(m):
                if (i==0 or j==0 or i==n-1 or j==m-1) and grid[i][j]==1:
                    q.append((i,j))
                    visit[i][j]=1
        lis1 = [1,-1,0,0]
        lis2 = [0,0,-1,1]
        
        while q:
            r,c=q.pop()
            
            for i in range(4):
                nr = r+lis1[i]
                nc = c+lis2[i]
                if (nr>=0 and nr<n and nc>=0 and nc<m) and grid[nr][nc]==1 and visit[nr][nc]==0:
                    visit[nr][nc]=1
                    q.append((nr,nc))
                    
        ans=0
        
        for i in range(1,n-1):
            for j in range(1,m-1):
                if grid[i][j]==1 and visit[i][j]==0:
                    ans+=1
                    
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == "__main__":
    for _ in range(int(input())):
        n, m = map(int,input().strip().split())
        grid = []
        for i in range(n):
            grid.append([int(i) for i in input().strip().split()])

        obj=Solution()
        print(obj.numberOfEnclaves(grid))
# } Driver Code Ends