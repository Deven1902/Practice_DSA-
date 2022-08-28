// circular queue. 

/* circular queue gives u the max utilization of array subcripts. 

*/

#include<iostream>
using namespace std; 

class cirQueueusingArray{
	int front, rear, size; 
	
	int *arr;
	
	public:
		cirQueueusingArray() {
			size = 10;
			arr = new int[10];
			front = rear=-1; 
		}
		cirQueueusingArray(int s) {
			size = 10;
			arr = new int[s];
			front = rear = -1; 
		}
		~cirQueueusingArray() {
			delete []arr;
		}
	
	void insert(int d) {
		if(isFull()) {
			cout<<"Queue overflow..."<<endl;
			return;
		}
		if(front == -1) 
			front = 0;
			
		if(rear == size-1)
			rear = 0; 
		
		else 
			rear = rear + 1;
			
		arr[rear] = d; 
		
		return; 
	}
	bool isFull() {
		if((front == -1) && (rear == size - 1) || (front == rear + 1) ) 
			return true; 
		else 
		 return false;
	}
	
	int peek() {
		if(isEmpty()) {
			cout<<"Underflow"<<endl; 
		}
		else 
			return arr[front]; 
	}
    
	int del() {
		int d; 
		if(isEmpty()) {
			cout<<"Underflow... "<<endl;
			return -999;
		}
		d = arr[front];
		if(front == rear) {
			front = -1;
			rear = -1; 
		}
		else if(front == size -1) 
			front = 0;
		else 
			front = front + 1; 
			
		return d; 
	}
	
	bool isEmpty() {
		if(front == -1) 
			return true; 
		else
			return false; 
	}
};


int main() {
	int ch, d;
	
	cirQueueusingArray obj[20];
	
	do {
		cout<<"1. insert\n2. delete \n3. Exit"<<endl;
		
		cout<<"Enter ur choice:- "<<endl;
		cin>>ch;
		
		switch(ch) {
			case 1: cout<<"\n Enter data";
				cin>>d;
				obj.insert(d);
				break; 
			
			case 2: d = obj.del();
				cout<<"Popped value = "<<d;
				break;
				
			/*case 3: d = obj.peek();
				cout<<"\n Top th value"<<d;
				break; 
			*/	
			case 3: break; 
			
			default: cout<<"Invalid Choice"; 
		}
	}while(ch!=3);
	
	return 0; 
}
