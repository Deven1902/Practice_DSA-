class Solution {
    
    bool isPalin(string s , int l , int r) {
        while(l<r)
            if(s[l++] != s[r--]) return false;
        
        return true;
    }
  
  public:
    string longestPalin (string S) {
    //Check all possibe substring and pick the largest one
        
    //For optimization if we have checked the largest substring is palindrome then then we don't have to check the substring of them
            
        int l = 0, r = 0 , n = S.size();

        for(int i = 0; i<n-1; i++) {
            for(int j = n-1; j>=i; j--) {
                if(!(i >= l && j <= r)  && isPalin(S , i, j) && j-i > r-l) {
                    l = i;
                    r = j;
                } 
            }
        }
        return S.substr(l , r-l+1);
    }
};
