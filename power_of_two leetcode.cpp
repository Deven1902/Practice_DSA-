// power of 2 - leetcode 

class Solution {
public:
    double myPow(double x, int n) {
        
        // Appraoch 

        // Simply multiply x n times if n is positive.
        // If n is negative, we know that x^-n can be written as 1/(x^n).
        
        /*
        double res=1;

        if(n<0) {
            n=-n;
            x=1/x;
        }

        for(int i=0; i<n; i++) 
            res = res*x;

        return res;
        */
        // 👆 gave TLE

        // alterbative approach:- 
    }
};
