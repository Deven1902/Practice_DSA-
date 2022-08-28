/* Data structures lecture 1

linear = array, linked list.
non- linear = tree, graph. 

Let's do aArray. 

pointer var of array is on stackk. but the whole array is still having memory on the heap. 

pointer = stack. -> whole array = heap. 

stack using array :
				uses LIFO. 
				used form one end and closed from other array. 
				functions push, pop, peek.
				it will have array as class member and top will maintian top th index of array. 
				
*/

/*#include<iostream>
using namespace std; 

class stackusingArray {
	int *arr;
	int top;
	int size;
	
	public:
		stackusingArray() {
			size = 10;
			arr = new int[10];
			top = -1; 
	}
	
	stackusingArray(int s) {
			size = s;
			arr = new int[s];
			top = -1; 
	}
	
	~stackusingArray() {
		delete []arr;
	}
	
	void push(int d) {
		if(!isFull()) {
			top = top + 1;
			arr[top] = d;	
		}
		else
			cout<<"Stack Overflow"<<endl;
		return; 
	}
	
	bool isFull() {
		if(top==size-1) 
			return true;
		else
			return false; 
	}
	
	int pop() {
		int d= -99;
		if(!isEmpty()) {
			d = arr[top];
			top = top - 1;
		}
		else 
			cout<<"stack Underflow"<<endl;
		return d;
	}
	
	bool isEmpty() {
		if(top == -1)
			return true;
		else 
			return false; 
	}
};

int main() {
	int ch, d;
	
	stackusingArray obj(15);
	do {
		cout<<"1. push\n2. pop \n3. peek \n4. Exit"<<endl;
		
		cout<<"Enter ur choice:- "<<endl;
		cin>>ch;
		
		switch(ch) {
			case 1: cout<<"\n Enter data";
				cin>>d;
				obj.push(d);
				break; 
			
			case 2: d = obj.pop();
				cout<<"Popped value = "<<d;
				break;
				
			//case 3: d = obj.peek();
			//	cout<<"\n Top th value"<<d;
			//	brreak; 
				
			case 4: break; 
			
			default: cout<<"Invalid Choice"; 
		}
	}while(ch!=4);
	
	return 0; 
}
*/
// Queue  

/* it has 2 ends: front and rear. 

insert, remove and peek. 

*/ 

#include<iostream>
using namespace std;

class queueusingArray{
	int front, rear, size; 
	
	int *arr;
	
	public:
		queueusingArray() {
			size = 10;
			arr = new int[10];
			front = rear=-1; 
	}
	queueusingArray(int s) {
			size = 10;
			arr = new int[10];
			front = rear=-1; 
	}
	~queueusingArray() {
		delete []arr;
	}
	
	void insert(int d) {
		if(front ==-1) 
		front = 0;
		//{
			rear = rear + 1;
			arr[rear] = d;
		//}
		//else 
		//cout<<"Queue is full" <<endl;
	}
	
	int remove() { 
		int d = -999;
		if(!isEmpty()) {
			d= arr[front];
			front = front + 1;
		}
		return d;
	}
	
	int peek() {
		if(isEmpty()) {
			cout<<"Underflow"<<endl; 
		}
		else 
			return arr[front]; 
	}
    
	bool isEmpty () {
		if((front == -1) || (front -rear == 1))
			return true;
			
		else
			return false; 
	}
};

int main() {
	int ch, d;
	
	queueusingArray obj(15);
	do {
		cout<<"1. insert\n2. delete \n3. peek \n4. Exit"<<endl;
		
		cout<<"Enter ur choice:- "<<endl;
		cin>>ch;
		
		switch(ch) {
			case 1: cout<<"\n Enter data";
				cin>>d;
				obj.insert(d);
				break; 
			
			case 2: d = obj.remove();
				cout<<"Popped value = "<<d;
				break;
				
			case 3: d = obj.peek();
				cout<<"\n Top th value"<<d;
				break; 
				
			case 4: break; 
			
			default: cout<<"Invalid Choice"; 
		}
	}while(ch!=4);
	
	return 0; 
}
