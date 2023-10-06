
'''
Approach:- 

The problem involves a multi-step process:

    1. Extract the alternative nodes from the linked list.
    2. Reverse the extracted list.
    3. Append the reversed list back to the original list.

The key to solve this problem is traversing the original list, mainitaing 2 pointers: one for the odd nodes & one for even. 
We will reverse the even nodes as we extract them, and finally connect the last odd nodes to the reversed even nodes. 

'''

class Solution:
    def rearrange(self, head):
        # Code here
        
        # Initialize pointers for odd and even nodes
        odd_node, even_node, previous_even = head, head.next, None


        while(odd_node and even_node):
            # Temporarily store the next node after the even node
            next_odd = even_node.next


            # Update the odd node's next pointer to skip the even node
            odd_node.next = next_odd


            # Update the previous odd node and move the odd pointer to the next odd node
            previous_odd, odd_node = odd_node, next_odd


            # Reverse the even node's direction and move the even pointer to the next even node
            even_node.next, previous_even = previous_even, even_node
            if odd_node:
                even_node = odd_node.next


        # Connect the last odd node to the first even node (if there are remaining odd nodes)
        if not even_node and odd_node:
            odd_node.next = previous_even
        else:
            previous_odd.next = previous_even

# Time complexity:- O(n) 
# n is the number of nodes in the linked list. We traverse the list once. 

# Space complexity:- O(1) 
# we do not use any extra data structures, and the space required is constant.
