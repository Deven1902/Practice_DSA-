class Solution
{
    public:
    void help(Node *root, int &ans, int k) {
        if(!root) return ;
        
        ans = min(ans, abs(root -> data - k));
        
        if(root -> data > k) 
            help(root -> left, ans, k);
            
        else
            help(root -> right, ans, k);
    }
    
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    int minDiff(Node *root, int K)
    {
        //Your code here
        
        int ans = INT_MAX;
        help(root, ans, K);
        
        return ans ;
    }
};
