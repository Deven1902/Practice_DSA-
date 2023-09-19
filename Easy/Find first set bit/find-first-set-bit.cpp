/Find first set bit 

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        
        if(n==0) 
            return 0;
            
        int i=0;
        while( (n & (1<<i)) == 0) {
            i++;
        }
        
        return i+1;
    }
};
