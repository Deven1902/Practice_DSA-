class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int x, y, z;
        // stores the sum of individual stack. 
        x =  y = z = 0;
        
        // Finding the initial sum of stack1.
        for(auto i : S1)
            x += i;
            
        // Finding the initial sum of stack2.
        for(auto i : S2)
            y += i;
            
        // Finding the initial sum of stack3. 
        for(auto i : S3)
            z += i;
         
        // these denote the top of the stack .
        int i, j, k;
        i = j = k = 0;
        
        
        while(i < N1 and j < N2 and k < N3){
            // when all the sum are equal.  
            if(x == y and y == z)
                return x;
            
            // when sum1 is the greatest of the 3.     
            if(x > y or x > z)
                x -= S1[i++];
               
            // when sum2 is the greatest
            if(y > x or y > z)
                y -= S2[j++];
              
            // when sum3 is the greatest.   
            if(z > x or z > y)
                z -= S3[k++];
        }
        
        return 0;
    }
};
