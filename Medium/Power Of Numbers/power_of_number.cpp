class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
        //Your code here
        
        long long ans = 1, n = N;
        
        while(R>0) {
            if(R % 2 == 0){
                n = (n * n)%mod;
                R /= 2;
            }
            
            else {
                ans = (ans*n)%mod;
                R=R-1;
            }
        }
        
        return ans;
    }

};
