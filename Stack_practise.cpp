// implementing stack on my own. 

#include<iostream>
using namespace std;

class stack{
	private:
		int top;
		int arr[5];
		
	public:
		stack() {
			top = -1; 
			for(int i=0; i<5; i++) 
				arr[i]=0;	
		}
		
		bool isEmpty() {
			if(top==-1)
				return true; 
				
			else 
				return false; 
		}
		
		bool isFull() {
			if(top==4) 
			return true;
			
			else 
			return false;
		}
		
		void push(int a) {
			if(isFull()) 
			cout<<"Stack Overflow"<<endl; 
			
			else {
				arr[top]= a;
				top++;
			}
		}
		
		int pop() {
			if(isEmpty()) 
			cout<<"Stack Underflow"<<endl;
			
			else {
				int pop = arr[top];
				arr[top] = 0; 
				
				top--; 
				
				return pop; 
			}
		}
		
		int count() {
			return top+1; 
		}
		
		int peek(int pos) {
			if(isEmpty())
			cout<<"Stack underflow"<<endl;
			
			else 
			return arr[pos-1];
		}
		
		void display() {
			cout<<"Vlaues in the stack are:- "<<endl;
			for(int i=5; i>0; i--) {
				cout<<arr[i]<<"\t";
				cout<<endl;
			}
		}
};

int main() {
	stack s1;
	int ch, position, val;
	
	do {
		cout<<"What operation would u like to perform:- ";
		cout<<"1. Push\n 2. Pop\n 3. isEmpty\n 4. isFull\n 5. Peek\n 6. count\n 7. display"<<endl;
		
		cin>>ch; 
		
		switch(ch) {
			case 1: 
			cout<<"Enter an item to push in stack:- ";
			cin>> val;
			s1.push(val);
			
			break;
			
			case 2: 
			cout<<"Popped out value is:- "<<s1.pop()<<endl;
			break;
			
			case 3: 
			if(s1.isEmpty())
			cout<<"stack is empty. "<<endl;
			
			else 
			cout<<"satck is not empty"<<endl;
			break; 
			
			case 4:
			if(s1.isFull())
			cout<<"stack is full. "<<endl;
			
			else 
			cout<<"satck is not full"<<endl;
			break; 
			
			case 5: cout<<"Enter position to peek:- ";
			cin>>position;
			
			cout<<s1.peek(position)<<endl;
			break ;
			
			case 6:
				cout<<"Count of the stack is:- "<<s1.count()<<endl;
				break;
				
			case 7: 
			//cout<</*"Elements in the stack are:- "<<*/s1.display()<<endl; 
			break; 
			
			default:
				cout<<"Enter appropriate vaalue!!"<<endl;
				break; 
		}
	}while(7);
	
	return 0; 
}
