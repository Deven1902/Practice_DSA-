

class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node *temp1 = head;
           Node *temp2 = head; 
           
           int count = 0;
           
           while(temp1) {
                temp1 = temp1 -> next;
                count++;
                if(count > n)
                    temp2 = temp2 -> next;
           }
           
           if(count < n) {
               return -1;
           }
           
           return temp2->data; 
    }
};
