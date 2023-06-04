class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            
            // the idea is to reverse the string first, then tokenize the numbers and reverse them to make the numbers as they were int the original case. 
            
            int n = s.length();
            
            // reversing the given equation. 
            reverse(s.begin(), s.end());
            
            int prev = 0; 
            
            for(int i=0; i<n; i++) {
                // finding the operators to tokenize. 
                if(s[i]=='+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                    int j = i-1; 
                    
                    // loop to reverse the number, bring back to original. 
                    while(prev < j) {
                        swap(s[prev], s[j]);
                        
                        j--;
                        prev++;
                        // original number is brought back. 
                    }
                    // now we set the prev varibale to the next number, hence i+1. 
                    prev = i+1; 
                }
            }
            // function to reverse the last token. 
            
            // if we did not include this part of the code then the last token remains reversed and the number doesnt come back to its original. 
            
            int j = n-1; 
            while(prev < j) {
                swap(s[prev], s[j]);
                
                j--;
                prev++;
            }
            
            return s;
        
        }
};
// time complexity:- O(N) -> runs in one for loop. 

// space complexity:- O(1). -> no extra space required. 
