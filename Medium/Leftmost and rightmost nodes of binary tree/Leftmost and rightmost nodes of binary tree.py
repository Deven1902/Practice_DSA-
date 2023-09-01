#User function Template for python3

'''
class Node:
    def _init_(self,val):
        self.data=val
        self.left=None
        self.right=None
'''

def printCorner(root):
    
    # print corner data, no need to print new line
    # code here
    
    q = []
    q.append(root)
    while q:
        n = len(q)
        
        for i in range(n):
            curr = q.pop(0)
            
            if i==0 or i==n-1:
                print(curr.data,end=" ")
                
            if curr.left:
                q.append(curr.left)
                
            if curr.right:
                q.append(curr.right)
