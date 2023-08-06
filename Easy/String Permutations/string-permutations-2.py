#User function Template for python3

# from itertools import permutations

# class Solution:
#     def permutation(self,s):
#         permu = permutations(s)
#         sorted_permutations = sorted([''.join(p) for p in permu])
#         return sorted_permutations

class Solution:
    def toString(self,List): 
        return ''.join(List) 
 
    def permute(self,a, l, r,S): 
        if l==r: 
            S.append(self.toString(a))
            return;
        else: 
            for i in range(l,r+1): 
                a[l], a[i] = a[i], a[l] 
                self.permute(a, l+1, r, S) 
                a[l], a[i] = a[i], a[l] 
                
    def permutation(self, s):
        n = len(s) 
        a = list(s) 
        S=[]
        self.permute(a, 0, n-1,S)
        S.sort()
        return S
