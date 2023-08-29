#User function Template for python3

'''
class Node:
    def __init__(self,x):
        self.data=x
        self.next=None

'''
'''
    When working with linked lists, it's not uncommon to encounter scenarios where you need to 
    manipulate the list by removing certain nodes based on certain conditions. One such interesting 
    problem is deleting nodes that have greater values on the right. In this article, we will explore the 
    problem, provide a step-by-step explanation of the approach, present an optimized solution with a 
    time complexity of O(N) and space complexity of O(1), perform a dry run to illustrate the process, 
    and analyze the time and space complexities.
    
'''

'''
Problem Statement:- 
Given a singly linked list, the task is to delete all the nodes that have a greater value on the right side.

For example, consider the following linked list:

Input: 12 -> 15 -> 10 -> 11 -> 5 -> 6 -> 2 -> 3
Output: 15 -> 11 -> 6 -> 3

'''

'''
Approach Explanation
The naive approach would involve iterating through each node and checking its value against the values of 
nodes on its right. If a node's value is smaller than any of the nodes to its right, it should be deleted. 
However, this approach would have a time complexity of O(N^2), which is not optimal for larger linked lists.

Instead, we can take an efficient approach using reverse traversal and a greedy technique. We will traverse 
the linked list in reverse order while maintaining two variables: `max_value` and `current_node`. 
The `max_value` keeps track of the maximum value encountered so far, and the `current_node` is used to 
iterate through the list.

1. Initialize `max_value` with the value of the last node (tail node).
2. Traverse the list in reverse order:
   a. If the current node's value is greater than or equal to `max_value`, delete the current node.
   b. If the current node's value is less than `max_value`, update `max_value` with the value of the 
   current node.
   
   c. Move the `current_node` pointer to the previous node.
'''

class Solution:
    
    def reverse_linked_list(self, head):
        prev, current = None, head
        
        while current:
            next_node, current.next = current.next, prev
            prev, current = current, next_node
        
        return prev
    
    def compute(self,head):
        #Your code here
        
        head = self.reverse_linked_list(head)
        
        max_value = head.data
        current_node = head
        
        while current_node.next is not None:
            if current_node.next.data < max_value:
                current_node.next = current_node.next.next
                if current_node.next is None:
                    break
            else:
                max_value = current_node.next.data
                current_node = current_node.next

        return self.reverse_linked_list(head)


#{ 
 # Driver Code Starts
#Initial Template for Python 3




# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    # creates a new node with given value and appends it at the end of the linked list
    def append(self, new_value):
        new_node = Node(new_value)
        if self.head is None:
            self.head = new_node
            self.tail =new_node
            return
        self.tail.next=new_node
        self.tail=new_node

    def getNode(self,value): # return node with given value, if not present return None
        curr_node=self.head
        while(curr_node.next and curr_node.data != value):
            curr_node=curr_node.next
        if(curr_node.data==value):
            return curr_node
        else:
            return None

    # prints the elements of linked list starting with head
    def printList(self):
        if self.head is None:
            print(' ')
            return
        curr_node = self.head
        while curr_node:
            print(curr_node.data,end=" ")
            curr_node=curr_node.next
        print(' ')





if __name__=="__main__":
    t=int(input())
    while(t>0):
        n = int(input())
        a = LinkedList() # create a new linked list 'a'.
        nodes = list(map(int, input().strip().split()))
        for x in nodes:
            a.append(x)
        
        
        result=Solution().compute(a.head)
        a.head=result
        a.printList()
        t-=1
    
        
    
    
# } Driver Code Ends
