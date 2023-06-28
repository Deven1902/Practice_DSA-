/* 
The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; 
*/


// Nothing but the height of the tree is to be returned. 
//Below is a recursive solution to return the height of the tree

class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        // Your code here
        
        if(root==NULL)
            return 0;
            
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        
        return max(l,r)+1;
    }
};

// Time complexity:- O(n) -> no. of iterations
// Space Complexity:- O(h) -> height of the tree
