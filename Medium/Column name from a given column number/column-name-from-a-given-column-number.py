#User function Template for python3

# Approach
 
# We can efficiently convert a column number to its corresponding column name using the following steps:

# 1. Initialize an empty string title to store the column name.

# 2. While the columnNumber is not zero:
#   - Calculate the remainder when dividing columnNumber - 1 by 26 (to map 1 to 'A,' 2 to 'B,' and so on).
#   - Convert the remainder to the corresponding uppercase letter using the chr function.
#   - Prepend the letter to the title string.
#   - Update columnNumber to the quotient when dividing (columnNumber - 1) // 26.

# 3. Return the title as the final column name.

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
        
# time complexity:- O(log n)

# space complexity:- O(1) 

#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    n = int (input ())
    ob = Solution()
    print (ob.colName (n))
    

# } Driver Code Ends
