//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void solve(int index,int a[],string str,vector<string>&ans,string mapping[],int N){
        if(index==N){
            ans.push_back(str);
            return;
        }
        int number = a[index];
        string value = mapping[number];
        
        for(int i=0;i<value.length();i++){
            str.push_back(value[i]);
            solve(index+1,a,str,ans,mapping,N);
            str.pop_back();
        }
    }
    
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        
        if(N==0)
            return {};

        vector<string>ans;
        
        string str = "";
        
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        solve(0,a,str,ans,mapping,N);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends