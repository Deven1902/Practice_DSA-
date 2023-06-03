class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                swap(matrix[i][j],matrix[j][i]);  // transposing 
            }
        }
        
        for(int j=0; j<n; j++) {
            int start = 0;
            int end = n-1; 
            
            while(start<end) {
                swap(matrix[start][j],matrix[end][j]);  // reversing columns 
                
                start ++;
                end --; 
            }
        }
    } 
};

/* 
Complexity
Time Complexity: O(n^2), as both the tasks are taking quadratic time complexity because of having two nested loops.
Auxiliary Space: O(1), as we are not using any extra space.
*/
