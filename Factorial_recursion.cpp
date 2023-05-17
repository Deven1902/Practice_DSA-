/*
Writing proper base cases in recursion. 

Below is a program to demostrate finding factorial of a number using recursion. 
*/

#include<iostream>
using namespace std; 

int fact(int n) {
    if(n == 0)
        return 1;

    return n*fact(n-1);
}

int main() {
    fact(5);
    cout<< fact(5) <<endl;
    return 0;
}