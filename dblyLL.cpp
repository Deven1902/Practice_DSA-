// doubly linkedList! 

 /* the node is different, the node stores data, addr of previous node and addr of the next node. 
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
 
 class dblyLinkedList {
 	dblyNode *head;
	 public: 
 	dblyLinkedList() {
 		head = NULL; 
	 }
	 
	 void insertFirst(int d) {
	 	dblyNode *new_node = new dblyNode(d); 
	 	if(head==NULL) {
	 		head=new_node; 
	 		return; 
		 }
		 else {
		 	head->setPrev(new_node);
		 	new_node->setNext(head);
		 	head=new_node;
		 	return; 
		 }
	 }
	 void insertLast(int d) {
	 	dblyNode *new_node = new dblyNode(d);
	 	if(head==NULL) {
	 		head = new_node; 
	 		return; 
		 }
		 else {
		 	dblyNode *iter = head;
		 	while(iter->getNext()!=NULL) {
		 		iter=iter->getNext();
			 }
			 iter->setNext(new_node); 
			 new_node->setPrev(iter);
			 return; 
		 }
	 }
	 
	 void insertByPos(int d, int pos) {
	 	dblyNode *new_node = new dblyNode(d);
	 	if(head==NULL || pos==1) {
	 		new_node->setNext(head);
	 		if(head!=NULL)
	 			head->setPrev(new_node);
	 		head = new_node; 
		 }  
		 else {
		 	dblyNode *iter=head; 
		 	int i; 
		 	for(int i=0; i<pos-1 && iter->getNext()!=NULL; i++) {
		 		iter = iter->getNext();
			 }
			 	new_node->setPrev(iter);
		 		new_node->setNext(iter->getNext());
				if(iter->getNext()!=NULL) 
		 			iter->getNext()->setPrev(new_node); 
		 		iter->setNext(new_node);
		 		return; 
		 }
	 }
	 
	 void deleteFirst() {
	 	dblyNode *deletable; 
	 	
	 	if(head!=NULL) {
	 		head = deletable; 
	 		deletable = head->getNext(); 
	 		delete deletable; 
		 }
	 }
	
	/*void deleteLast() {
		dblyNode *deletable, *last;
		if(head!=NULL) {
			if(head->getNext()==NULL)
				head=NULL;
			else {
				deletable = head; 
				while(deletable->getNext()->getNext()!=NULL)
					deletable = deletable->getNext();
				last=deletable->getNext(); 
				deletable = deletable->getNext();
				
				delete last;
				delete deletable;  
			}
		}
	}*/
	 void display() {// same as the singly LL display
			dblyNode *iter;
			iter = head; 
			
			while(iter!=NULL) {
				cout<<iter->getData()<<"\t->"; 
				iter = iter->getNext();	
			}
			cout<<"\n";	
	 }
 };
 
 
 int main() {
 	dblyLinkedList dl; 
 	
 	dl.insertFirst(10);
 	dl.insertFirst(20);
 	dl.insertLast(30);
 	dl.insertLast(40);
 	dl.insertByPos(25, 8);
 	dl.display();
 	
 	dl.deleteLast(); 
 	dl.display(); 
 	
 	return 0; 
 }
