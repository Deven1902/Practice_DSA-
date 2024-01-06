//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:

    int getPrimeFactorCount(int n){
        int count = 0;
        
        while(n%2 == 0){
            count++;
            n /= 2;
        }
        
        for(int i=3; i<=sqrt(n); i+=2){
            
            while(n%i == 0){
                count++;
                n /= i;
            }
        }
        
        if(n > 2){
            count++;
        }
        
        return count;
    }
    
	int sumOfPowers(int a, int b){
	    // Code here
	   // int sum = 0;
    //     for (int i = a; i <= b; i++) {
    //         int num = i, prime = 2, power = 0;
    //         while (num > 1) {
    //             while (num % prime == 0) {
    //                 num /= prime;
    //                 power++;
    //             }
    //             sum += power;
    //             prime = prime == 2 ? 3 : prime + 2;
                
    //             // Reset power for the next ticket number
    //             power = 0; // This line has been added as per the suggestion
    //         }
            
    //     }
    //     return sum; 
    
        int sum = 0;
        
        for(int i=a; i<=b; i++)
            sum += getPrimeFactorCount(i);
        
        return sum;
	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends