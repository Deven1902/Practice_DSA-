// print N to 1 using recursion. 

#include <iostream>
using namespace std;


void printToN(int n)
{
	if(n == 0)
		return;

	cout<<n<<" ";
	
	printToN(n - 1);

}

int main() {
	
	int n = 4;
	
	printToN(n);
	
	return 0;
}

// time complexity:- o(n) -> as every function calls the next function until they reach 0. Hence this we have N functions waiting in the fucntion call stack. 

// space complexity:- o(n) -> as N functions are waiting in the funciton call stack... N functions take up space and hence this. 
