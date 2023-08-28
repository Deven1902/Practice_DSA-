class Solution:
	def floodFill(self, image, sr, sc, newColor):
		#Code here
		
		r=len(image)
        c=len(image[0])
        stc=image[sr][sc]
        visited=[[0 for x in range(c)]for y in range(r)] 
        def dfs(i,j):
            if i < 0 or i > r - 1 or j < 0 or j > c - 1 or image[i][j] != stc:
                return
            if visited[i][j]:
                return
            visited[i][j]=1
            image[i][j]=newColor
            return dfs(i-1, j) or dfs(i+1, j) or dfs(i, j-1) or dfs(i, j+1)
        dfs(sr,sc)
        return image



#{ 
 # Driver Code Starts
import sys
sys.setrecursionlimit(10**7)


T=int(input())
for i in range(T):
	n, m = input().split()
	n = int(n)
	m = int(m)
	image = []
	for _ in range(n):
		image.append(list(map(int, input().split())))
	sr, sc, newColor = input().split()
	sr = int(sr); sc = int(sc); newColor = int(newColor);
	obj = Solution()
	ans = obj.floodFill(image, sr, sc, newColor)
	for _ in ans:
		for __ in _:
			print(__, end = " ")
		print()
# } Driver Code Ends