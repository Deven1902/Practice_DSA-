//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int low = 0, high = n-1;
        
        int closest = INT_MAX;
        int maxAbsDiff = INT_MIN;
        pair<int, int> maxAbsPair({-1, -1});
        
        
        while(low < high){
            int sum = arr[low] + arr[high];
            int diff = abs(sum - target);
            
            if(diff < closest){
                closest = diff;
                maxAbsDiff = abs(arr[low] - arr[high]);
                maxAbsPair = {arr[low], arr[high]};
            }else if(diff == closest){
                if(abs(arr[low] - arr[high]) > maxAbsDiff){
                    maxAbsDiff = abs(arr[low] - arr[high]);
                    maxAbsPair = {arr[low], arr[high]};
                }
            }
            
            if(sum < target){
                low++;
            }else{
                high--;
            }
        }
        
        if(maxAbsPair.first == -1 && maxAbsPair.second == -1){
            return {};
        }
        
        return {maxAbsPair.first, maxAbsPair.second};
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends