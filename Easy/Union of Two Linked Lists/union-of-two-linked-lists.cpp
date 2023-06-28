// Author:- Deven Nandapurkar
/*
Problem:- Union of Two Linked Lists. 

Given two linked lists, your task is to complete the function makeUnion(), that returns the union list of two linked lists. 
This union list should include all the distinct elements only and it should be sorted in ascending order.

Problem link:- https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1 

Date:- 27th June.

Difficulty:- Easy.

Topic:- Sorting/ linkedList

Cpp solution 👇👇
*/

// Thought process-> First combine the 2 linkedList and then sort them in asceding order. 

// ptoblme is a slight modification of merge sort algo. 
    // Step 1: - Merge the given two lists.
    
    // Step 2: - Sort the merged List
    
    // Step 3: - Remove Duplicate elements from the final List.

// we will be using merge sort here... due to following reasons. 
    // 1. Merge Sort Technique uses a merge function to combine lists. So we don't need to write an explicit function for STEP 1.
    // 2. While merging the Elements of two lists, we can handle duplicate elements by adding a simple condition.

class Solution
{
    
    private:
    Node* merge(Node* a, Node* b) {
        if (a == nullptr)
            return b;
        if (b == nullptr)
            return a;

        Node* ans = nullptr;

        if(a->data < b->data) {
            ans = a;
            ans->next = merge(a->next, b);
        } 
        
        else if(b->data < a->data) {
            ans = b;
            ans->next = merge(a, b->next);
        } 
        
        else {
            ans = a;
            ans->next = merge(a->next, b->next);
        }

        return ans;
    }

    Node* sort(Node* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        Node* slow = head;
        Node* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        Node* mid = slow;
        Node* nextToMid = mid->next;
        mid->next = nullptr;

        Node* first = sort(head);
        Node* second = sort(nextToMid);

        Node* ans = merge(first, second);

        return ans;
    }
    
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        
        Node* merged = merge(head1, head2);
        Node* sorted = sort(merged);
        return sorted;
    }
// time complexity:- O(n log n).
// space complexity:- O(n).
};
