// what is recursion!?  


// What are the applications of Recursion:- 

/*
Recursion can be interchangebly used with iteration. What ever can be done with iteration that same can be donw with the recursion as well. 
vice a versa. 

Recursive solutions make things simpler on their iterative counterparts. 

Many common algos based on recursion:- Dynamic Programing, Backtracking, Divide and Conquer. 

Common problems:- Tower of hanoi, DFS based traversal. 

*/

// example code 1:- 

 /* #include <iostream>
using namespace std;


void fun(int n)
{
	if(n == 0)
		return;

	cout<<n<<endl;

	fun(n - 1);
	
	cout<<n<<endl;
}
int main() {
	
	fun(3);
	
	return 0;
} 

Output looks like:- 3
2
2
1
2
3
*/ 

// example 2:- 
/* 
#include <iostream>
using namespace std;


void fun(int n)
{
	if(n == 0)
		return;

	fun(n - 1);
	
	cout<<n<<endl;
	
	fun(n - 1);
}
int main() {
	
	fun(3);
	
	return 0;
} 

Output:- Looks like:- 1
2
1
3
1
2
1
*/

// example:- Recursive program dispaying the nature of log n:- 
/* 
#include <iostream>
using namespace std;


int fun(int n)
{
	if(n == 1)
		return 0;
	else
		return 1 + fun(n / 2);
}
int main() {
	
	cout<<fun(1);
	
	return 0;
} 

Output looks like:- 4 
this shows the conversion of a number to its log counter part recursively. 
*/ 

// example showing binary conversion of number using recursive calls:- 
/*
#include <iostream>
using namespace std;

// recursive function to change the number to binary. 
void fun(int n)
{
	if(n == 0)
		return;
	
	fun(n / 2);

	cout<<(n % 2)<<endl;
}
int main() {
	
	fun(7);
	
	return 0;
}

output:- 111
 
*/