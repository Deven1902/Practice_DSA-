//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        
        set<char> s;
        for(auto i:str) s.insert(i);
        
        int mCnt = 0;
        int dCnt = s.size();
        
        // unordered_map<char, int> mp;
        vector<char> mp(256, 0);
        int ans = INT_MAX;
        
        int i = -1, j = -1;
        int size = str.size();

        while(1) {
            bool flag1 = 0, flag2 = 0;
            
            while(i < size-1 and mCnt < dCnt) {
                ++i;
                mp[str[i]]++;
                if(mp[str[i]] <= 1)
                mCnt++;
                flag1 = 1;
            }
            
            while(j < i and mCnt == dCnt) {
                ++j;
                ans = min(ans, i-j+1);
                
                mp[str[j]]--;
                if(mp[str[j]] == 0) mCnt--;
                flag2 = 1;
            }
            
            if(!flag1 and !flag2) break;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends