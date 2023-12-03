'''
# Tree Node
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def countPairs(self, root1, root2, x): 
        #code here.
        
        stack1, stack2 = [], []

        count = 0
    
        while True:
            while root1:
                stack1.append(root1)
                root1 = root1.left
    
            while root2:
                stack2.append(root2)
                root2 = root2.right
    
            if not stack1 or not stack2:
                break
    
            top1, top2 = stack1[-1], stack2[-1]
    
            if top1.data + top2.data == x:
                count += 1
                stack1.pop()
                stack2.pop()
                root1 = top1.right
                root2 = top2.left
            elif top1.data + top2.data < x:
                stack1.pop()
                root1 = top1.right
            else:
                stack2.pop()
                root2 = top2.left
    
        return count

# time complexity:- O(N)
# space complexity:- O(N) 

#Explanation: 
# The algorithm uses the in-order traversal property of BSTs to explore pairs in a sorted order. 
# By comparing the sum of current nodes' values with the target value x, the algorithm efficiently 
# moves through the BSTs to find pairs satisfying the condition. The use of two stacks and an iterative 
# approach helps achieve the required time and space complexity.
