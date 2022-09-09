// recurssion

/* Direct recursion:- function is called within itself.

indirect recurssion:- 2 functions are calling each other. 

eg main()  {
fun()1;
}

void fun1() {
fun2();
}

each process will get 2mb stack allocation. 
beyonf 2mb if a provess is trying to allocate stack sace. then error
stack overflow will occur.
this will give error but... stack overflow and segmentation fault. 

solution: identify the ase case appropriately, which will termiante the function call
and returns the execution control.

you should pass a paramter, vaklue of that paramter should keep changing 
and check the valye of that oaramter and terminate/ return from function based on condition. 


*/ 

// indirect recursion example recursion. 

/*#include<iostream>
using namespace std; 

void fun2(int j) {
	void fun1(int i); 
	
	fun1(j+1);
	cout<<"fun2 ends"<<endl; 
}

void fun1(int i) {
	if(i>5)
		return;
	fun2(i+1);
	cout<<"Fun1 ends"<<endl; 
}

int main() {
	fun1(5);
	cout<<"Recurssion ends"<<endl; 
	return 0;  
}
*/

// winding and un winding of function 

/* forward recursive statements :- which get excuted while winfing of function calls.

backward                       :- which get excuted while unwinding of function calls.


*/

#include<iostream>
using namespace std; 



int main() {
	void fun1(int n) {
		if(n>5) return;
		
		cout<<"\t"<<n;  // forward recursive statement. 
		fun1(n+1);
		//cout<<endl;    // this is backward statement. 
		//cout<<"\t"<<n;
		return; 
	}
	return 0; 
}



