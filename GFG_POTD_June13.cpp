class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    
	    /*
	    priority_queue<int> p;
	    vector<int> ans;
	    
	    for(int i=0; i<n; i++)
	        p.push(arr[i]);
	       
	    while(k--)
	        ans.push_back(p.top()) , p.pop();
	        
	    return ans;
	    
	    // time complexity:- O(Log n);

        // space complexity:- o(n);
        
        */
        
        // alternate simple c++ solution. 
        
        sort(arr, arr+n);
        
        vector<int> res;
        
        int i=1;
        while(k--) {
            res.push_back(arr[n-i]);
            i++;
        }
        
        return res;
        
        // time complexity:- O(n).
        // space complexity:- O(n). 
	}

};
