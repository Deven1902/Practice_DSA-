#User function Template for python3


class Solution:
    def countPairs (self, arr, target) : 
        #Complete the function 
        
        n = len(arr)
        
        l = 0
        r = n - 1
        count  = 0
        while l < r:
            
            sm = arr[l] + arr[r]
            
            if sm > target:
                r -= 1
            elif sm < target:
                l += 1
            else:
                t1 = arr[l]
                t2 = arr[r]
                c1 = 0
                c2 = 0
                while l < n and arr[l] == t1:
                    c1 += 1
                    l+=1
                    
                while r >= 0 and arr[r] == t2:
                    c2 += 1
                    r-=1
                
                count += (c1 * (c2-1))//2 if t1 == t2 else c1 * c2
                
        return count



#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():
    import sys
    input = sys.stdin.read
    data = input().split('\n')

    t = int(data[0].strip())
    index = 1

    for _ in range(t):
        arr = list(map(int, data[index].strip().split()))
        index += 1
        target = int(data[index].strip())
        index += 1

        res = Solution().countPairs(arr, target)
        print(res)
        print("~")


if __name__ == "__main__":
    main()

# } Driver Code Ends