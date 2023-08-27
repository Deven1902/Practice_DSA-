#User function Template for python3

'''
Extended slice operator:- puts “step” fields as [start, stop, step].
                        giving no field as start and stop indicates default to 0 and string length respectively.
                        -1 denotes starting from the end and stop at the start, hence reversing a string. 
'''

# simple one line python code

class Solution:
    def reverseWord(self, s):
        #your code here
        
        return s[::-1]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while(t>0):
        s = input()
        ob = Solution()
        print(ob.reverseWord(s))
        t = t-1

# } Driver Code Ends