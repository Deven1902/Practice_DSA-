#User function Template for python3

class Solution:
    def removeConsecutiveCharacter(self, S):
        # code here
        
        res=''
        res+=S[0]
        for i in range(1,len(S)):
            if S[i]!=res[-1]:
                res+=S[i]
                
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())

    for tcs in range(T):
        s = input()
        ob = Solution()
        print(ob.removeConsecutiveCharacter(s))

# } Driver Code Ends