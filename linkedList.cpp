// Linked list. 

/*

*/

#include<iostream>
using namespace std; 


class listNode {
	int data;
	listNode *next, *head;
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
		int setHead(listNode *h) {
			head = h; 
		}
		listNode *getHead() {
			return head; 
		}
		
};


class linkedList {
	listNode *head;
	 
	public:
		linkedList () {
			head = NULL;
		}
		~linkedList() {
			listNode *deletetable, *iter = head;
			
			while(iter!=NULL) {
				deletetable = iter; 
				iter = iter->getNext(); 
				delete deletetable; 
			}
		}
		void insert_first(int d) {
			listNode*new_node= new listNode(d); 
			
			if(head == NULL) {
				head = new_node;
				return;
			}
			new_node->setNext(head);
			head = new_node; 
		}
		
		void insert_at_last(int d) {
			listNode *new_node = new listNode(d);
			
			if(head == NULL) {
				head = new_node; 
				return; 
			}
			
			listNode *iter = head; 
			
			while(iter->getNext()!=NULL) {
				iter = iter->getNext();
			}
			iter->setNext(new_node); 
		}
		
		int delete_first() {
			int d;
			listNode *deletetable; 
			d=head->getData();
			deletetable = head; 
			head = head->getNext();
			
			delete deletetable;
			return d;  
		}
		
		int delete_last() {
			int d;
			listNode *iter=head; 
			listNode *deletetable; 
			
			while(iter->getNext()->getNext()!=NULL) {
				iter=iter->getNext();
			}
			
			deletetable = iter->getNext();
			iter->setNext(NULL);
			
			delete deletetable; 
			return d; 
		}
		
		void insertByPos(int d, int pos) {
			listNode *new_node = new listNode(d);
			if((pos==1) || (head==NULL)) {
				new_node -> setNext(head);
				head = new_node; 
				return; 
			}
			listNode *temp = head; 
			for(int i=1; i<pos-1 && temp->getNext()!=NULL; i++) 
				temp = temp->getNext();
				
			new_node->setNext(temp->getNext());
			temp->setNext(new_node);
			return ;
		}
		
		//
		int deleteByPos(int pos) {
			listNode *deletetable, *temp;
			int d = -999;
			if(pos==-1) {
				d=head->getData();
				deletetable = head; 
				head = head->getNext(); 
				delete deletetable; 
				
			}
			temp = head; 
			for(int i=1; i<pos-1 && temp ->getNext()!=NULL; i++)
				temp = temp->getNext();
				
				if(temp->getNext()!=NULL) {
					d=temp->getNext()->getData(); 
					deletetable = temp->getNext();
					temp->setNext(temp->getNext()->getNext()); 
					delete deletetable; 
					
					return d; 
				}
				
				else {
					cout<<"Position is not valid!!"<<endl; 
					return d; 
				}
		}
		void display() {
			listNode *iter;
			iter = head; 
			
			while(iter!=NULL) {
				cout<<iter->getData()<<"\t->"; 
				iter = iter->getNext();	
			}
			cout<<"\n";	
		}
		
		// write a function named display alternate nodes.
		//docus on ur terminating condition. 
		
		/*void displayAlter() {
			listNode *iter;
			iter = head; 
			int count = 0; 
			
			while(iter!=NULL) {
				if(count%2==0) {
						cout<<iter->getData()<<"->";
				} 
				else {
					iter->getNext(); 
				}
				count++; 
				iter = iter->getNext()->getNext(); 
			}
		}*/
		
		// soham function;
		
		void displayAlter() {
			listNode *iter;
			iter = head; 
			//int count = 0; 
			
			while(iter!=NULL && iter->getNext()!=NULL) {  // so here we take 2 conditions so that the program doesnt crash if the middle element is a NULL element. Null element is supposed to take the end of the linkedList. 
				//if(count%2==0) {
						cout<<iter->getData()<<"\t->";
				//} 
				//count++; 
				iter = iter->getNext()->getNext(); 
			}
			cout<<endl; 
		} 
		// concat function  for linked list -> 18/8/22
		
		/* linkedListConcat(linkedList list) {
			listNode iter = head; 
			while(iter->getNext()!=NULL) 
				iter = iter->getNext(); 
			
			iter->setNext((list.getHead())); 
			return this; 
		} */
		
		void deleteByData(int d) {
			listNode *deletable, *iter, *prev;
			
			iter = head;
			
			if(iter->getData()==d) {
				deletable = head; 
				head = head->getNext();
				delete deletable;
				return; 
			}
			while(iter->getNext()!=NULL) { // only for searhing the element,  delete in the next block of code. 
				if(iter->getNext()->getData()==d)
				break; 
				// here we require a previous pointer	
				prev = iter; 
				iter = iter->getNext();
			}// 
			//cout<<iter->getData();
			if(iter->getData()==d) {
				deletable = iter; 
				prev->setNext(NULL);
				delete deletable; 
				return; 
			}
			else if(iter->getNext()!=NULL && iter->getNext()->getData()==d ) {
				deletable = iter->getNext();
				iter->setNext(iter->getNext()->getNext());
				
				delete deletable; 
				return; 
			}
			else {
				cout<<"Invalid data...!!! "<<endl; 
			}
		return; 
		}
		
		// reverse function !
		
		void reverseList() {
			listNode *prev, *next, *iter; 
			prev = NULL; 
			iter = head; 
			while(iter!=NULL) {
				next = iter->getNext();
				iter->setNext(prev);
				prev = iter; 
				iter = next; 
			} 
			head = prev; 
		}
};

// iterator =  a variable used to traverse in data structures. 

// here we take an iterator of listNode type to traverse the nodes of linked list. 

int main() {
	linkedList list;
	//int ch; 
	
	list.insert_first(5);
	list.insert_first(6);
	list.insert_first(20);
	list.insert_at_last(55);
	list.insert_at_last(56);
	list.insert_at_last(57);
	list.insert_at_last(58);
	list.insert_at_last(59);
	list.insert_at_last(60);
	list.insert_at_last(61);
	//list.insert_at_last(62);
	//list.display();
	
	list.insert_first(65);
	list.display();
	//list.deleteByData(70);
	//list.display();
	//list.delete_last(); 
	//list.display(); 
	
	/*list.insertByPos(50, 4);
	list.display();
	
	list.deleteByPos(4);
	list.display();*/ 
	
	//list.displayAlter(); 
	
	list.reverseList();
	list.display();
	//cout<<"Next elemnet is:- "<<list.getNext()<<endl;	
	/* 1 insert last.
		insert first
		insert at position.
		delete last.
		delete first.
		delete by position.
		reverse.
		insert before data.
		display. 
		exit. 
	*/
	
	return 0; 
}
