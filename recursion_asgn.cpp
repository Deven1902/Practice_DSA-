// print 1.. n without using loop. 
//print n to 1 without using loop. 

/*#include<iostream>
using namespace std; 

void display(int *a, int i, int s) {
	if(i==s) return; 
	
	cout<<a[i]<<"\t";
	display(a, i+1, s);
}

int main() {
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int size = 10;
	
	display(arr, 0, size);
	cout<<"\n the end..."<<endl;
	
	return 0;
}
*/
// print in reverse using backward recursive statement. 

/*#include<iostream>
using namespace std; 

void display(int *a, int i, int s) {
	if(i==s) return; 
	

	display(a, i+1, s);
	cout<<a[i]<<"\t";    //backward recursive statement. 
}

int main() {
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int size = 10;
	
	display(arr, 0, size);
	cout<<"\n the end..."<<endl;
	
	return 0;
}
*/

// asgn 3:- sum of array elements. 

/*
#include<iostream>
using namespace std; 

int sum(int *a, int i, int s) {
	if(i==s) return 0; 
	
	return a[i]+sum(a,i+1,s) ;
}

int main() {
	int size, arraySum;
	
	cout<<"Enter the size of array:- ";
	cin>>size; 
	
	int arr[size];
	
	cout<<"Enter the elements in array:- "<<endl;
	for(int i=0; i<size; i++) {
		cin>>arr[i];
	}
	
	arraySum = sum(arr, 0, size);
	cout<<"Sum of array elements :- "<<arraySum<<endl; 
	
	int arr[5] = {1,41,651,855,32}; 
	
	cout<<sum(arr, 0, 5);
	
	//sum();
	return 0;
}
*/
 
//asgn 4:- return power of n^m; 

#include<iostream>
using namespace std; 

int calPower(int b, int p) {
	if(p!=0) 
		return b*calPower(b,p-1);
	else 
		return 1; 
}

int main() {
	int base = 5, power = 12; 
	
	cout<<"Calculated power is:- "<< calPower(base, power);
	 
	return 0; 
}

//print difits of a number.


