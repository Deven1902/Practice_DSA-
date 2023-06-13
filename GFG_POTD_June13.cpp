class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    
	    priority_queue<int> p;
	    vector<int> ans;
	    
	    for(int i=0; i<n; i++)
	        p.push(arr[i]);
	       
	    while(k--)
	        ans.push_back(p.top()) , p.pop();
	        
	    return ans;
	}
// time complexity:- O(Log n);

// space complexity:- o(n);

};
