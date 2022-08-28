// stack linkedList using

/* LIFO = has unlimeted storage.  

push, pop, peek, isEmpty. 

isFull is imvalid due to unlimited storage. 
*/

#include<iostream>
using namespace std; 

class listNode {
	int data;
	listNode *next, *top;
	public:
		listNode() {
			data = 0; 
			next = NULL;	
		}
		
		listNode(int d) {
			data = d;
			next = NULL;
		}
		void setData(int d) {
			data = d; 
		}
		void setNext(listNode *n) {
			next = n;
		}
		int getData() {
			return data; 
		} 
		listNode *getNext() {
			return next; 
		}
		int setTop(listNode *t) {
			top = t; 
		}
		listNode *getTop() {
			return top; 
		}
		
};

class stackUsingLL {
	listNode *top; 
	public:
	stackUsingLL() {
		top = NULL;
	}
	~stackUsingLL() {
			listNode *deletable, *iter = top;
			
			while(iter!=NULL) {
				deletable = iter; 
				iter = iter->getNext(); 
				delete deletable; 
			}
		}
	void push(int d) {
		//insertATFirst from LL; 
		listNode *new_node = new listNode(d);
		
		if(top == NULL) {
			top = new_node; 
			return; 
		}
		new_node->setNext(top);
		top = new_node; 
	}
	
	int pop() {
		// delete at first ; 
		int d;
			listNode *deletable; 
			d = top->getData();
			deletable = top; 
			top = top->getNext();
			
			delete deletable;
			return d;  
	}
	
	int peek() {
		//do not write top = top-> getNext(); 
		int d;
			listNode *deletable; 
			d = top->getData();
			deletable = top; 
			//top = top->getNext();
			
			delete deletable;
			return d;	
		}
		
		bool isEmpty() {
			if(top == NULL) 
			return true; 
			else return false; 
		}
	
		// isFull function is invalid. 
		
		void display() {
			listNode *iter;
			iter = top; 
			
			while(iter!=NULL) {
				cout<<iter->getData()<<"\t->"; 
				iter = iter->getNext();	
			}
			cout<<"\n";	
		}
	
};

int main() {
	stackUsingLL list1; 
	int ch, d;
	do {
		cout<<"\n0. Exit\n1. push\n2. pop\n3. peek\n4. display"<<endl;
		cout<<"What operation u want to perform??";
		cin>>ch;
		
		switch(ch) {
			case 1: cout<<"\n Enter the data:- ";
			cin>>d; 
			list1.push(d);
			break; 
			
			case 2: cout<<"\n Popped data is:- ";
			cout<<list1.pop(); 
			break; 
			
			case 3: cout<<"First value is :- "<<list1.peek();
			break; 
			
			case 4: list1.display(); 
			break;
			 
			case 0: cout<<"Thankyou!! "<<endl;
			break;  
		}

	}while(ch!=0); 
	
	return 0; 
}
