#User function Template for python3

class Solution:
    def smithNum(self, n):
        # code here 
        
        s1=Solution.total(n)
        s2=0
        i=2
        count=0
        while n!=1:
            if n%i==0 and i<=9:
                s2+=i
                n=n//i
                count+=1
            elif n%i==0 and i>9:
                s2+=Solution.total(i)
                n=n//i
                count+=1
            else:
                i+=1
   
        if (s1==s2) and count>1 :
            return 1
        return 0
        
    def total(n):
        sm=0
        while n!=0:
            sm+=n%10
            n=n//10
            
        return sm


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n=int(input())
        
        ob = Solution()
        print(ob.smithNum(n))
# } Driver Code Ends