// quueue using linked list. 

#include<iostream> 
using namespace std; 

class listNode {
	int data;
	listNode *front, *rear, *next;
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
		int setFront(listNode *f) {
			front = f; 
		}
		int setRear(listNode *r) {
			rear = r; 
		}
		listNode *getFront() {
			return front; 
		}
		listNode *getRear() {
			return rear; 
		}
};

class queueLL {
	listNode *front, *rear; 
	public:
		queueLL() {
			front = rear = NULL;
		}
		~queueLL() {
			listNode *deletable, *iter = front;
			
			while(iter!=NULL) {
				deletable = iter; 
				iter = iter->getNext(); 
				delete deletable; 
			}
		}
		void insert(int d) {  
			listNode *new_node = new listNode(d);
			
			if(front == NULL) {
				front = new_node; 
				return; 
			}
			
			listNode *iter = front; 
			
			while(iter->getNext()!=NULL) {
				iter = iter->getNext();
			}
			iter->setNext(new_node); 
		}
		
		/*void insertAtRear(int d) {  
			listNode *new_node = new listNode(d);
			
			if(front == NULL) {
				front = rear = new_node; 
				return; 
			}
			
			rear->setNext(new_node);
			rear = new_node; 
		}*/
		
		int remove() {
			int d;
			listNode *deletable; 
			d=front->getData();
			deletable = front; 
			front = front->getNext();
			
			delete deletable;
			return d; 
		}
		
		int peek() {
			int d;
			listNode *deletable; 
			d=front->getData();
			deletable = front; 
			//front = front->getNext();
			
			delete deletable;
			return d; 
		}
		void display() {
			listNode *iter;
			iter = front; 
			
			while(iter!=NULL) {
				cout<<iter->getData()<<"\t->"; 
				iter = iter->getNext();	
			}
			cout<<"\n";	
		}
};

int main() {
	int ch, d;
	
	queueLL q1; 
	/*do {
		cout<<"\n0. Exit\n1. push\n2. pop\n3. peek\n4. display"<<endl;
		cout<<"What operation u want to perform??";
		cin>>ch;
		
		switch(ch) {
			case 1: cout<<"\n Enter the data:- ";
			cin>>d; 
			q1.insert(d);
			break; 
			
			case 2: cout<<"\n Popped data is:- ";
			cout<<q1.remove(); 
			break; 
			
			case 3: cout<<"First value is :- "<<q1.peek();
			break; 
			
			case 4: q1.display(); 
			break;
			 
			case 0: cout<<"Thankyou!! "<<endl;
			break;  
		}

	}while(ch!=0); 
	*/
	return 0; 
}

