#User function Template for python3

class Solution:
    def maxOnes(self, a, n):
        # Your code goes here
        
        # Using kandane's algo
        # Replace 1 -> -1 because we want minimum 1's to be flipped
        # Replace 0 -> 1 because this is what we want
        
        for i in range(n):
            if a[i] == 1:
                a[i] = -1
            elif a[i] == 0:
                a[i] = 1
            
        s = 0
        max_till_here = 0
        original_ones = 0
        for i in range(n):
            s = s + a[i]
            if a[i] == -1:
                original_ones +=1
            if s < 0:
                s = 0
            if s > max_till_here:
                max_till_here = s
        
        return max_till_here + original_ones


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        ob=Solution()
        print(ob.maxOnes(a, n))

        T -= 1


if __name__ == "__main__":
    main()



# } Driver Code Ends