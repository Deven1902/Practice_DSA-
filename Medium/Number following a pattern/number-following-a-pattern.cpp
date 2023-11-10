//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
        
        int n = s.length();
        vector<int> ans(n + 1);
        for(int i = 0; i < n + 1; i++) ans[i] = i + 1;
        int p = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == 'D'){
                if(p == -1) p = i;
            } else {
                if(p != -1){
                    int l = p, r = i;
                    while(l <= r){
                        swap(ans[l], ans[r]);
                        l++; r--;
                    }
                }
                p = -1;
            }
        }
        if(p != -1){
            int l = p, r = n;
            while(l <= r){
                swap(ans[l], ans[r]);
                l++; r--;
            }
        }
        string res = "";
        for(int i = 0; i < n + 1; i++) res += (char)(ans[i] + '0');
        return res;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends