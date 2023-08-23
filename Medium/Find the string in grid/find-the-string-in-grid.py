#User function Template for python3

class Solution:
	def searchWord(self, grid, word):
		# Code here
		
		wLen = len(word)
		n=len(grid)
		m=len(grid[0])
		ans = set()
		dx = [1,-1,0,0,-1,-1,1,1]
		dy = [0,0,1,-1,-1,1,1,-1]
		def dfs(index,r,c,di,dj,grid,wLen):
		    if index==wLen:
		        return True
		    if r<0 or r>=n or c<0 or c>=m or grid[r][c]!=word[index]:
		        return False
		    return dfs(index+1,r+di,c+dj,di,dj,grid,wLen)
		    
		for i in range(n):
		    for j in range(m):
		        for k in range(8):
		            if dfs(0,i,j,dx[k],dy[k],grid,wLen):
		                ans.add((i,j))
		ans = sorted(ans)
		return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, m = input().split()
		n = int(n); m = int(m);
		grid = []
		for _ in range(n):
			cur  = input()
			temp = []
			for __ in cur:
				temp.append(__)
			grid.append(temp)
		word = input()
		obj = Solution()
		ans = obj.searchWord(grid, word)
		for _ in ans:
			for __ in _:
				print(__, end = " ")
			print()
		if len(ans)==0:
		    print(-1)

# } Driver Code Ends