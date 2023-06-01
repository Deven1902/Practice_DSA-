class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    
	    vector<int> in(V,0);
	    
	    for(int i=0; i<V; i++) {
	        for(int j : adj[i])
	            in[j]++;
	    }
	    
	    queue<int> q;
	    vector<int> order;
	    
	    for(int i = 0; i < V; i++) {
	        if(in[i] == 0) {
	            q.push(i);
	            order.push_back(i);
	        }
	    }
	    
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop();
	        
	        for(int child : adj[node]){
	            in[child]--;
	            
	            if(in[child] == 0) {
	                q.push(child);
	                order.push_back(child);
	            }
	        }
	    }
	    
	    return order;
	}
};
