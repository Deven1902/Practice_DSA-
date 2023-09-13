#User function Template for python3

class Solution:
    def findLargest(self, N, S):
        # code here
        
        # approach:- greedy method 
        
        # checking invalid condition
        if (N>1 and S==0) or (N*9 < S):
            return -1
        
        # start from the leftmost digit... and fill it with the largest possible digit (9 obvio). 
        # do this as long as the sum is <= S.  
        # then move to the next digit. 
        
        # we repeat this untile we have made the N digit number. 
        
        largestN=""
        for digit_position in range(N):
            if S>=9:
                largestN, S=largestN+'9', S-9
            else:
                largestN, S=largestN+str(S), 0
        
        return largestN



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, S = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.findLargest(N, S))
# } Driver Code Ends
