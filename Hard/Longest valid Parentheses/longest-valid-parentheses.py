# User function Template for Python3

class Solution:
    def maxLength(self, S):
        # code here
        
        mx=0
        stack=[-1]
        for i in range(len(S)):
            if S[i] == '(':
                stack.append(i)
            
            else:
                stack.pop()
                if len(stack)==0:
                    stack.append(i)
                
                else:
                    mx=max(i-stack[-1],mx)
        
        return mx




#{ 
 # Driver Code Starts
# Initial Template for Python3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        S = input()
        
        ob = Solution()
        print(ob.maxLength(S))
# } Driver Code Ends