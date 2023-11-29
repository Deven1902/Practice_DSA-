class Solution:
	def isEulerCircuitExist(self, V, adj):
		#Code here
		
		odd=0
        for item in adj:
            if len(item)%2==1:
                odd+=1
        if odd==0:
            return 2
        elif odd==2:
            return 1
        return 0


#{ 
 # Driver Code Starts


if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		V, E = map(int, input().strip().split())
		adj = [[] for i in range(V)]
		for _ in range(E):
			u, v = map(int, input().split())
			adj[u].append(v)
			adj[v].append(u)
		obj = Solution()
		ans = obj.isEulerCircuitExist(V, adj)
		print(ans)
# } Driver Code Ends