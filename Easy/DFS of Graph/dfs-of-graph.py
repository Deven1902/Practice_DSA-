#User function Template for python3

class Solution:
    
    #Function to return a list containing the DFS traversal of the graph.
    def dfsOfGraph(self, v, adj):
        # code here
        
        visited = [False]*v
        ans = []
        
        if v==0:
            return ans
            
        x=0
        
        def traverse(x):
            visited[x] = True
            ans.append(x)
            for i in adj[x]:
                if visited[i] is not True:
                    traverse(i)
                    
        traverse(x)
        
        return ans

#{ 
 # Driver Code Starts

if __name__ == '__main__':
    T=int(input())
    while T>0:
        V,E=map(int,input().split())
        adj=[[] for i in range(V+1)]
        for i in range(E):
            u,v=map(int,input().split())
            adj[u].append(v)
            adj[v].append(u)
        ob=Solution()
        ans=ob.dfsOfGraph(V,adj)
        for i in range(len(ans)):
            print(ans[i],end=" ")
        print()
        T-=1
# } Driver Code Ends