/* 
Mini project Asgn! 
create a class student having rno, name, marks, grade, all getter and setter functions,
defauylt and copy constructor and destructor. 

create a linkedList of objetc of studnet class
class student {
	int rno; 
	cahr name[15]; 
	float marks; 
	char grade;
	
	public:
		//default and parameterized constructors
		student(int r, char *nm, flaat mk, char g) {
			rno = r ;
			strcpy(name = nm);
			marks = mk;
			grade =g; 
	    }
		// getter and setter functions; 
};

class studNode {
studnet *stud; 
node *next;

public:
	Node() {
	stud = new student(0, "NA", 0.0, "F");
	next = NULL; 
}

	Node(Int r, char *nm, float mk, char g) {
		stud = new student (r, nm, mk,g);
		next = NULL; 
}

	void insertFirst(Int r, char *nm, float mk, char g) {
		stud = new studnet (0, NA, 0.0, F);  
	}
	
	// write getter and setter functions. 
	
};

class studLL {

	node *head; 
	studLL() {
	head = NULL; 
	
	}
}

int main() {
	insert first 
		insert by passing student address
		insert by passing student data
		
	insert last
		by passing student address
		by passing student data
		
	insert by position
	insert before rno
	delete first
	delete last
	display
	
}
*/

#include<iostream>
#include<string.h>

using namespace std; 

class student {
	int rno;
	char name[20];
	float marks;
	char grade;
	public:
		student() {
			rno = 0; 
			strcpy(name, "\0"); 
			marks = 0.0;
			grade = 'F'; 
			
		}
		
		student(int r, char *n, float mks, char g) {
			rno = r;
			//name = new char[strlen(n)+1];
			strcpy(name,n); 
			marks = mks;
			grade = g; 
			
		}
				
		void setName(char *nm) {
			strcpy(name, nm); 
		}
		
		char getName() {
			return *name; 
		}
		
		void setRno(int r) {
			rno = r; 
		}
		
		int getRno() {
			return rno; 
		}
		
		void setMarks(float m) {
			marks = m; 
		}
		
		float getMarks() {
			return marks; 
		}
		
		void calGrade(char g) {
			if(marks>=280) {
				grade = 'A';
			}
			else if(marks>=200 && marks<=280) {
				grade = 'B';
			}
			else {
				grade = 'C';
			}
		}
		
		char getGrade() {
			return grade; 
		}
		
		void display() {
			cout<<"Name:- "<<name<<endl;
			cout<<"total marks:- "<<marks<<endl;
			cout<<"Your grade is:- "<<getGrade();
		}
		
		void acceptData() {
			cout<<"Enter your roll no:- ";
			cin>> rno;
			
			cout<<"Enter your name:- ";
			cin>>name;
			
			cout<<"Enter your total marks:- ";
			cin>>marks; 
			
			calGrade(grade); 
			getGrade(); 

		}
};

/*class node {
	student *stud;  
	node *next; 
	public:
		node() {
			stud = new student(0, "NA", 0.0, 'F'); 
			next = NULL; 
		}	
		node(int r, char *nm, float mks, char g) {
			stud = new student(r, nm, mks, g);
			next = NULL; 
		}
		
	//	void insertFirst(stud *s) {
	//		node newNode = new node(s); 
	//	}
};
*/
class studNode {
	
	student *stud; 
	studNode *next;
	
	public:
		studNode() {
			stud = new student(0, "NA", 0.0, 'F'); 
			next = NULL;
		}
		
		studNode(student *s) {
			stud = s; 
			next = NULL; 
		}
		
		studNode(int r, char *nm, float mks, char g) {
			stud = new student(r, nm, mks, g);
			next = NULL; 
		}
		
		void setNext(studNode *n) {
			next = n;
		}
		
		studNode *getNext() {
			return next; 
		}
		
		void setStud(student *s) {
			stud = s;
		}
		
		student *getStud() {
			student *st; 
			cout<<st->getName();
			return stud;
		}
};

class studLL {
	studNode *head;
	studNode *next; 
	public: 
		studLL() {
			head = NULL; 
		}
		void insertFirst(student *s) {
			studNode *newNode = new studNode(s); 
			
			if(head==NULL) {
				head = newNode; 
				return; 
			}
			newNode->setNext(head); 
			head = newNode; 
		}
		
		void display() {
			studNode *iter;
			iter = head; 
			while(iter!=NULL) {
				
				cout<<iter->getStud()<<"\t->"; 
				iter = iter->getNext();
			}
			cout<<endl;
		}
		//void insertFirst()
		
			
};

int main() {
	student s1(45, "Deven", 9.2, 'O'), s2, s3, s4; 
	studLL l1;
	l1.insertFirst(s1); 
	l1.display();
	return 0; 
}
