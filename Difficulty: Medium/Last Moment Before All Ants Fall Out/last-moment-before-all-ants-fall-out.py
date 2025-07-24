class Solution:
    def getLastMoment(self, n, left, right):
        # code here
        
        if not left:
            return max(n-pos for pos in right)
        if not right: 
            return max(left)
        
        else: 
            return max(max(left),max(n-pos for pos in right))
        
        
        
        
        
        
        
        
        
        
        
        
        
        # return max(max(left) if left else 0, max(map(lambda x: n - x, right)) if right else 0)
