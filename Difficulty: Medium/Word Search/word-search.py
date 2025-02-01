class Solution:
    
    d=[(0,1),(0,-1),(1,0),(-1,0)]
    
    def dfs(self,mat,word,visited,i,j,ind):
        row,col=len(mat),len(mat[0])
        if mat[i][j]!=word[ind]:
            return False
        if ind==len(word)-1:
            return True
        visited[i][j]=True
        for dx,dy in self.d:
            x,y=i+dx,j+dy
            if 0<=x<row and 0<=y<col and visited[x][y]==False:
                if self.dfs(mat,word,visited,x,y,ind+1):
                    return True
        visited[i][j]=False
        return False
        
        
	def isWordExist(self, mat, word):
		#Code here
		
		row,col=len(mat),len(mat[0])
        visited=[[False]*col for _ in range(row)]
        for i in range(row):
            for j in range(col):
                if self.dfs(mat,word,visited,i,j,0):
                    return True
        return False


#{ 
 # Driver Code Starts
if __name__ == '__main__':
    T = int(input())
    for tt in range(T):
        n = int(input())
        m = int(input())
        mat = []
        for i in range(n):
            a = list(input().strip().split())
            b = []
            for j in range(m):
                b.append(a[j][0])
            mat.append(b)
        word = input().strip()
        obj = Solution()
        ans = obj.isWordExist(mat, word)
        if ans:
            print("true")
        else:
            print("false")
        print("~")

# } Driver Code Ends