// 

#include<iostream>
using namespace std; 

int fibonacci(int n) {
    if(n<=1)
        return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    fibonacci(6);
    
    cout<< fibonacci(6) << endl;

    return 0;
}