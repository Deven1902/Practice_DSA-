class Solution{
    public:
    
    int height(Node *root) {
        if(root == NULL) 
            return 0;
        return max(height(root -> left), height(root -> right)) + 1;
    }
    
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        if(root == NULL) 
            return true;

        if(isBalanced(root -> left) && isBalanced(root -> right)) {
            if(abs(height(root -> left) - height(root -> right)) <= 1) 
                return true;
        }
        
        return false;
    }
};

// # time complexity:- O(n) -> n is the number of nodes in the tree 
// # This is because the function needs to traverse the tree once to calculate the height of each node. 
          
// # space complexity:- O(h) -> h is the height of the tree. 
// # The function also needs to maintain a stack to store the nodes that have been visited, but the size of the stack is bounded by the height of the tree.
