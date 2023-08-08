//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  
    string helper(string s) {   
        vector<int>cnt(26, 0);
        string str="";
        
        for(int i=0; i<s.size(); i++)
            cnt[s[i]-'a']++;
            
        for(int i=0; i<26; i++)
            str+=char(cnt[i]);
            
        return str;
    }
    
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        
        vector<vector<string>>res;
       
       map<string,vector<int>>mp;
       
       for(int i=0;i<string_list.size();i++) 
           mp[helper(string_list[i])].push_back(i);
           
       for(auto itr:mp) {
           vector<string>ans;
           for(int i=0;i<itr.second.size();i++)
               ans.push_back(string_list[itr.second[i]]);
               
           res.push_back(ans);
        }
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
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends