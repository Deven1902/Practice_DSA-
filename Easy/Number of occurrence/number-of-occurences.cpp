class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    
	    int s=0, e=n-1, mid, f=-1, l=-1;
        
        	    
	    while(s<=e) {
	        mid = (s+e)/2;
	        if(arr[mid] == x) {
	            f = mid;
	            e = mid-1;
	        }
	        else if(arr[mid] > x) {
	            e = mid-1;
	        }
	        else {
	            s = mid + 1;
	        }
	    }
	    
	    if(f == -1) {
	        return 0;
	    }
	    
	    s=0; 
	    e = n-1;
	    
	    while(s<=e) {
	        mid = (s+e) /2;
	        if(arr[mid] == x){
	            l=mid;
	            e = mid+1;
	        }
	        
	        else if(arr[mid] <x) {
	            s = mid +1;
	        }
	        
	        else {
	            e = mid-1;
	            
	        }
	    }
	    
	    return l - f+1;
	    
	}
};
