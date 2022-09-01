/* write another program
to create a Doubly linked list having 2 node pointer: head and tail, 
write insert(all 3 functions) 
wrtie display() adn rev_display();

*/ 

#include<iostream>
using namespace std; 

class dblyNode {
 	int data;
 	dblyNode *prev, *next; 
 	public:
 		dblyNode() {
 			data=0;
 			prev=NULL;
 			next=NULL;
		 }
		 dblyNode(int d) {
 			data=d;
 			prev=NULL;
 			next=NULL;
		 }
		 void setData(int d) {
		 	data = d;
		 }
		 void setPrev(dblyNode *p) {
		 	prev = p;
		 }
		 void setNext(dblyNode *n) {
		 	next = n;
		 }
		 
		 int getData() {
		 	return data;
		 }
		 
		 dblyNode *getPrev() {
		 	return prev;
		 }
		 dblyNode *getNext() {
		 	return next; 
		 }
 };
 
 class dblyList {
 		dblyNode *head, *tail;
 		public:
 			dblyList() {
 				head = NULL;
				tail = NULL;  
	 		}	
	 	
	 		void insertFirst(int d) {
	 			dblyNode *new_node = new dblyNode(d); 
	 			if(head==NULL) {
	 				head=new_node; 
	 				tail =  new_node; 
	 				return; 
				}
				else {
					head->setPrev(new_node);
		 			new_node->setNext(head);
		 			head=new_node;
		 			return;
				}
		}
		void insertlast(int d) {
			dblyNode *new_node = new dblyNode(d); 
	 			if(head==NULL) {
	 				head=new_node; 
	 				tail =  new_node; 
	 				return; 
				}
				else {
					dblyNode *iter;
					iter = head; 
					while(iter->getNext()!=NULL) {
						iter= iter->getNext(); 
					}
					new_node->setPrev(iter);
					iter->setNext(new_node); 
					tail = new_node;  // 
				}
		}
		
		    void display() {
		    	dblyNode *iter; 
		    	iter = head; 
		    	while(iter!=NULL) {
		    		cout<<iter->getData()<<"->\t";
		    		iter=iter->getNext(); 
				}
				cout<<"\n"; 
			}
			
			void rev_display() {
				dblyNode *iter; 
				iter = tail;
				while(iter!=NULL) {
					cout<<iter->getData()<<"->\t";
					iter = iter->getPrev();
				}
				cout<<endl; 
			}
 };
 
 
 int main() {
 	dblyList l1; 
 	
 	l1.insertFirst(5);
 	l1.insertFirst(6);
 	l1.insertFirst(7); 
 	l1.display(); 
 	
 	l1.rev_display();
 	
 	l1.insertlast(8); 
 	l1.insertlast(9);
 	l1.insertlast(10);
 	l1.display();
 	l1.rev_display(); 
 	return 0; 
}
