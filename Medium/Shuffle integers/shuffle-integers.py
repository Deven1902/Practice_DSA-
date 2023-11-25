class Solution:
    def shuffleArray(self, arr, n):
        # Your code goes here
        
        temp = a.copy()
        j = (len(a)//2)-1
        for i in range((len(a)//2)-1,0,-1):
            a[i+j] = a[i]
            j -= 1
        l = len(a)//2
        j = (len(a)//2)-1
        for k in range(l,len(a)):
            a[k-j] = temp[k]
            j -= 1
