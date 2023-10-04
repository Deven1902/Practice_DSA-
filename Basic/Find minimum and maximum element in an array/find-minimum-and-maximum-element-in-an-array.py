#User function Template for python3

def getMinMax( a, n):
    
    max0 = a[0]
    min0 = a[0]
    for i in range(1,n):
      if a[i] > max0:
          max0 = a[i]

      if a[i] < min0:
          min0 = a[i]

    return min0,max0
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        
        product = getMinMax(a, n)
        print(product[0], end=" ")
        print(product[1])

        T -= 1


if __name__ == "__main__":
    main()



# } Driver Code Ends