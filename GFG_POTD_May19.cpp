/*
Author:- Deven Nandapurkar. 

Date:- 19th may. 

Problem:- Find k-th smallest element in given n ranges
Given n ranges of the form [p, q] which denotes all the numbers in the range [p, p + 1, p + 2,...q].  
Given another integer q denoting the number of queries. The task is to return the kth smallest element for each query (assume k>1) after combining all the ranges.
In case the kth smallest element doesn't exist return -1. 

*/

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        
        sort(range.begin(), range.end());
        
        vector<int> ans(q);
        for(int p = 0; p < q; p++){
            int current = range[0][0];
            int pos = 1;
            
            for(int i = 0; i < n; i++){
                int need = queries[p] - pos;
                
                if(need and range[i][0] > current){
                    --need;
                    ++pos;
                    current = range[i][0];
                }
                
                int cango = range[i][1] - current;
                int change = min(cango, need);
                change = max(0, change);
                
                pos += change;
                current += change;
            }
            
            
            ans[p] = (pos == queries[p]) ? current : -1;
        }
        
        return ans;
    } 
};

// time complexity:- O(N log n)
// space complexity:- O(n) 
