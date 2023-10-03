#User function Template for python3

class Solution:
    def colName (self, n):
        # your code here
        
        title = ""
        while n:
            
            # Calculate the remainder when dividing by 26 (number of letters in the English alphabet).
            remainder = (n-1)%26
            
            # Convert the remainder to the corresponding uppercase letter (A-Z).
            title = chr(65 + remainder) + title
            
            # Update columnNumber to the quotient when divided by 26.
            n = (n-1)//26
            
        return title


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    n = int (input ())
    ob = Solution()
    print (ob.colName (n))
    

# } Driver Code Ends