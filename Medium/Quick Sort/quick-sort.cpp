class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int s, int e)
    {
        // code here
        
        if(s>= e) return;
        int pivot = e;
        int i= s-1;
        int j=s; 
        
        while(j<pivot) {
            if(a[j]<a[pivot]) {
                i++;
                swap(a[i], a[j]);
            }
            j++;
        }
        i++;
        swap(a[i], a[pivot]); 
        quickSort(a, s, i-1);
        quickSort(a,i+1,e);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       
        // not required. 
    }
};
