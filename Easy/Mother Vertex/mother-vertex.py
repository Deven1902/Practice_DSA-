
def dfs(adj, s, visited):
        visited[s]=True
        for u in adj[s]:
            if visited[u]==False:
                dfs(adj, u, visited)
            
            
class Solution:
    
            
    #Function to find a Mother Vertex in the Graph.
	def findMotherVertex(self, V, adj):
		#Code here
		
		visited=[False]*V     # Normal Dfs call with res to store last visited
        res=-1
        for i in range(V):
             if visited[i]==False:
                   dfs(adj,i,visited)
                   res=i
                
        visited = [False] * V    # now check last visited vertex for mother
        dfs(adj, res, visited)
         
            
        if all(visited): 
            return res
         
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys 

sys.setrecursionlimit(10**6) 
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		V, E = map(int, input().split())
		adj = [[] for i in range(V)]
		for _ in range(E):
			u, v = map(int, input().split())
			adj[u].append(v)
		obj = Solution()
		ans = obj.findMotherVertex(V, adj)
		print(ans)
# } Driver Code Ends