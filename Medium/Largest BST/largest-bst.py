#User function Template for python3

class Solution:
    # Return the size of the largest sub-tree which is also a BST
    def largestBst(self, root):
        #code here
        
        IMIN = float("-inf")
        IMAX = float("inf")
        def solve(root):
            nonlocal IMIN,IMAX
            if root==None:
                return IMAX,IMIN,0
            if (root.left==None and root.right==None):
                return root.data,root.data,1
             
            left=solve(root.left)
            right=solve(root.right)
     
             
            ans=[0,0,0]
             
            if left[1]<root.data and right[0]>root.data:
                ans[0]=min(left[0],right[0],root.data)
                ans[1]=max(right[1],left[1],root.data)
                ans[2]=1+left[2]+right[2]
                return ans
     
            ans[0]=IMIN
            ans[1]=IMAX
            ans[2]=max(left[2],right[2])
            return ans
        return solve(root)[2]


#{ 
 # Driver Code Starts
import sys
sys.setrecursionlimit(1000000)

from collections import deque

# Tree Node
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None

# Function to Build Tree
def buildTree(s):
    # Corner Case
    if (len(s) == 0 or s[0] == "N"):
        return None

    # Creating list of strings from input
    # string after spliting by space
    ip = list(map(str, s.split()))

    # Create the root of the tree
    root = Node(int(ip[0]))
    size = 0
    q = deque()

    # Push the root to the queue
    q.append(root)
    size = size + 1

    # Starting from the second element
    i = 1
    while size > 0 and i < len(ip):
        # Get and remove the front of the queue
        currNode = q[0]
        q.popleft()
        size = size - 1

        # Get the current node's value from the string
        currVal = ip[i]

        # If the left child is not null
        if (currVal != "N"):
            # Create the left child for the current node
            currNode.left = Node(int(currVal))

            # Push it to the queue
            q.append(currNode.left)
            size = size + 1
        # For the right child
        i = i + 1
        if (i >= len(ip)):
            break
        currVal = ip[i]

        # If the right child is not null
        if (currVal != "N"):
            # Create the right child for the current node
            currNode.right = Node(int(currVal))

            # Push it to the queue
            q.append(currNode.right)
            size = size + 1
        i = i + 1
    return root



if __name__ == "__main__":
    t = int(input())
    for _ in range(0, t):
        s = input()

        root = buildTree(s)
        ob = Solution()
        print(ob.largestBst(root))

# } Driver Code Ends