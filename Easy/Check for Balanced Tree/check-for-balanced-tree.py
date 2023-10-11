#User function Template for python3


'''class Node: 
    # Constructor to create a new Node 
    def __init__(self, data): 
        self.data = data 
        self.left = None
        self.right = None'''


#Function to check whether a binary tree is balanced or not.
class Solution:
    def isBalanced(self,root):
    
        #add code here
        
        def height(node):
            if not node:
                return 0
                
            return 1+max(height(node.left),height(node.right))
            
        if not root:
            return True
            
        elif abs(height(root.left)-height(root.right))>1:
            return False
            
        else:
            return self.isBalanced(root.left) and self.isBalanced(root.right)

# time complexity:- O(n) -> n is the number of nodes in the tree 
# This is because the function needs to traverse the tree once to calculate the height of each node. 
          
# space complexity:- O(h) -> h is the height of the tree. 
# The function also needs to maintain a stack to store the nodes that have been visited, but the size of the stack is bounded by the height of the tree.
