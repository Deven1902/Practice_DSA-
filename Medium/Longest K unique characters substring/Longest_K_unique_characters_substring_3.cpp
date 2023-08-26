//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        // your code here
        
        int N = s.size();
        int maxlen = -1 , unique = 0;
        vector<int> hash(26,0);
        for(int L=0,R=0;R<N;R++) {
            unique += (++hash[s[R]-'a'] == 1);
            while(unique > k) unique -= (--hash[s[L++]-'a'] == 0);
            if(unique == k && L <= R) maxlen = max(maxlen,R-L+1);
        }
        return maxlen;
    }
};
