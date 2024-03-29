"""
  reverse alternate nodes and append at the end
  The input list will have at least one element
  Node is defined as
class Node:

	# Constructor to initialize the node object
	def __init__(self, data):
		self.data = data
		self.next = None

"""

'''
Approach:- 

No need to reverse the linked list. 

find the first and the last node
then traverse the linked list and insert all the alternate nodes at the tail, no need to reverse.
'''

class Solution:
    def rearrange(self, head):
        # Code here
        
        p = head
        tail = None
        while p.next!=None:
            p = p.next
        tail = p
        p = head
        q = head.next
        while p!=tail and p.next!=tail:
            p.next = q.next
            q.next = tail.next
            tail.next = q
            p = p.next
            q = p.next


#{ 
 # Driver Code Starts
# Node Class
class Node:
    # Constructor to initialize the node object
    def __init__(self, data):
        self.data = data
        self.next = None


# Linked list class contains node object
class LinkedList:
    # Constructor to initialize head
    def __init__(self):
        self.head = None

    # Function to insert a new node at the beginning
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def printList(self):
        temp = self.head
        while (temp):
            print(temp.data, end=" ")
            temp = temp.next
        print()


# Code execution starts here
if __name__ == '__main__':
    t = int(input())
    while (t > 0):
        llist = LinkedList()
        n = int(input())
        values = list(map(int, input().strip().split()))
        for i in reversed(values):
            llist.push(i)
            
        Solution().rearrange(llist.head)
        llist.printList()
        t -= 1
# Contributed by: Harshit Sidhwa
# } Driver Code Ends
