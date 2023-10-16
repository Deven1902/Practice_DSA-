from typing import List

class Solution:
    def largestIsland(self, grid : List[List[int]]) -> int:
        
        # Code here
        n = len(grid)
        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
        parentSize = {}

        def is_valid(i, j):
            return 0 <= i < n and 0 <= j < n

        def set_graph_parent(graphParent, grid, i, j, parent):
            graphParent[i][j] = parent
            count = 1
            for dir in directions:
                dx, dy = i + dir[0], j + dir[1]
                if is_valid(dx, dy) and grid[dx][dy] == 1 and graphParent[dx][dy] == -1:
                    count += set_graph_parent(graphParent, grid, dx, dy, parent)
            parentSize[parent] = count
            return count

        graphParent = [[-1] * n for _ in range(n)]

        for i in range(n):
            for j in range(n):
                if grid[i][j] == 1 and graphParent[i][j] == -1:
                    set_graph_parent(graphParent, grid, i, j, i * n + j)

        ans = 0
        for i in range(n):
            for j in range(n):
                if grid[i][j] == 0:
                    distinct_parent = set()
                    for dir in directions:
                        dx, dy = i + dir[0], j + dir[1]
                        if is_valid(dx, dy) and grid[dx][dy] == 1 and graphParent[dx][dy] not in distinct_parent:
                            distinct_parent.add(graphParent[dx][dy])
                    temp = 0
                    for parent in distinct_parent:
                        temp += parentSize[parent]
                    ans = max(ans, temp + 1)
                else:
                    ans = max(ans, parentSize[graphParent[i][j]])

        return ans



#{ 
 # Driver Code Starts

class IntMatrix:
    def __init__(self) -> None:
        pass
    def Input(self,n,m):
        matrix=[]
        #matrix input
        for _ in range(n):
            matrix.append([int(i) for i in input().strip().split()])
        return matrix
    def Print(self,arr):
        for i in arr:
            for j in i:
                print(j,end=" ")
            print()

if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        grid=IntMatrix().Input(n,n)
        
        obj = Solution()
        res = obj.largestIsland(grid)
        
        print(res)
# } Driver Code Ends