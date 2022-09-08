// circular queue using linkedList

#include<iostream>
using namespace std; 

class node {
	int data;
	node *next, *last; 
	
	public:
		node() {
			data = 0;
			next = NULL; 
		}
		
		node(int d) {
			data = d; 
			next = NULL; 
		}
		
		void setData(int d) {
			data = d;
		}
		
		int getData() {
			return data;
		}
		
		void setNext(node *n) {
			next = n;
		}
		
		node *getNext() {
			return next; 
		}
		
		void setLast(node *l) {
			last = l;
		}
		
		node *getLast() {
			return last; 
		}
};

class lL {
	node *last;
	
	public:
		lL() {
			last = NULL;
		}
		
		~lL() {
			node *iter, *deletable, *temp;
			iter=last->getNext();
			temp = last->getNext(); // used this temp variable to store the head and check the condition of our do-while loop and exit the loop. 
			do {
				deletable = iter;
				iter=iter->getNext();
				delete deletable; 
			}while(iter!=temp);
		}
		
		void insertFirst(int d) {
			node *newNode = new node(d);
			
			if(last == NULL){
				last = newNode;
				last->setNext(last);
			}
			else {
				newNode->setNext(last->getNext());
				last->setNext(newNode); 
			}
		}
		void insertlast(int d) {
			node *newNode = new node(d);
			
			if(last == NULL){
				last = newNode;
				last->setNext(last);
			}
			else {
				newNode->setNext(last->getNext());
				last->setNext(newNode); 
				last = newNode; 
			}
		}
		void insertAfter(int d, int after) { // we have to insert our d, after the node 'after'. 
			// have a searching loop
			// have an int flag set to 0
			
			/* if u get any data then set flag to 1
			
			and then say return.
			and if the flag is set to 0 after whole traversal then say that data not found.  
			*/
			int f = 0;
			node *iter, *newNode;
			newNode = new node(d);
			iter= last->getNext();
			
			do{
				if(iter->getData()==after){
					f=1;
					newNode->setNext(iter->getNext());
					
					iter->setNext(newNode);
					if(iter==last) {
						last=newNode; 
					}
					return;
				}
				if(f==0) {
					cout<<"!! Not Found !!"<<endl;
				}
				return;
			}while(iter->getNext()!=NULL);
		}
		
		/*void insertByPos(int d, int pos) {
			node newNode = new node(d);
			if((pos==1) || (head = NULL)) {
				newNode->setNext(last);
				last=newNode;
				return ;
			}
			node *iter = head;
			for(int i=1; i<pos-1 && iter->getNext()!=NULL; i++)
				iter = iter->getNext();
				
			newNode -> setNext(iter->getNext());
			iter->setNext(newNode);
			return; 					
		}*/ 
		
		
		void display() {
			node *iter;
			iter = last->getNext();
			
			do {
				cout<<iter->getData()<<"\t->";
				iter=iter->getNext();
			}while(iter!=last->getNext()); // last ->getNext to avoid the omision of th elast node. 
			
		}
};

int main() {
	lL list1;
	
	list1.insertFirst(50);
	list1.insertFirst(51);
	list1.insertFirst(52);
	
	list1.display();
	cout<<endl; 
	
	list1.insertlast(100);
	list1.insertlast(101);
	list1.insertlast(102);
	
	list1.display(); 
	
	
	return 0;
}
