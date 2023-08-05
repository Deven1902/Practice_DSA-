class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    sort(a.begin(), a.end());
    
    long long diff = INT_MAX;
    
    for(int i=0; i+m<=n; i++)
        diff=min(diff, a[i+m-1]-a[i]);
        
    return diff;
    
    }   
};
