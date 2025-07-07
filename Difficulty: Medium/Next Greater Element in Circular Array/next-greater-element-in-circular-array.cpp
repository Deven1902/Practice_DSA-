class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        // int n = arr.size();
        // vector<int> res(n, -1);
        
        // for(int i=0; i<n; i++) {
        //     for(int j=1 ; j<n; j++) {
        //         if(arr[i] < arr[(i+j) %n]) {
        //             res [i] = arr[(i+j) %n];
        //             break;
        //         }
        //     }
        // }
        
        // return res;  
        
        // brute force solution got TLE. 
        
        // stack solution -> optimised. 
        
        int n = arr.size();
        vector<int> res(n, -1);
        stack<int> st; 
        
        for(int i=0; i<2*n; i++) {
            int idx = i%n; 
            int num = arr[idx]; 
            
            while(!st.empty() && num>arr[st.top()]) {
                res[st.top()] = num; 
                st.pop(); 
            }
            
            if(i<n) {
                st.push(idx); 
            }
        }
        return res; 
    }
};