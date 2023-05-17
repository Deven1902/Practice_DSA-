// print 1 to N using recursion. 

#include <iostream>
using namespace std;


void printToN(int n)
{
	if(n == 0)
		return;
	
	printToN(n - 1);

	cout<<n<<" ";

}

int main() {
	
	int n = 4;
	
	printToN(n);
	
	return 0;
}

// time and space complexity:-  O(N). 
