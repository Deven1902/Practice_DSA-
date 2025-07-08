class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> res(n, -1); 
        
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }
        
        stack<int> st; 
        
        for(int i=0; i<n; i++) {
            while (!st.empty() && freq[arr[i]] > freq[arr[st.top()]]) {
                int idx = st.top();
                st.pop();
                res[idx] = arr[i]; 
                
            }
            st.push(i);
        }
        return res; 
    }
};
