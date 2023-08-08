//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    void findAll(string &str,string s,unordered_set<string> &store,int i) {
        if(i==str.length()) {
            store.insert(s);
           // cout<<s<<",";
            return;
        }
        
        findAll(str,s+str[i],store,i+1);
        findAll(str,s,store,i+1);
    }
    
    
    set<string> allPossibleSubsequences(string S) {
        // code here
        unordered_set<string> store;
        int index=0;
        string s;
        findAll(S,s,store,index);
        set<string> ans;
        
        unordered_set<char> vowel={'a','e','i','o','u'};
        for(auto x:store) {
            int n=x.size()-1;
            if(n>=1 && vowel.find(x[0]) != vowel.end() && vowel.find(x[n])==vowel.end())
                ans.insert(x);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends