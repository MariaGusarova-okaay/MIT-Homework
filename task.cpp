#include<iostream>
using namespace std;


int main(){
	cout << "Hello, World!" << endl;

	int n; cout << "n = "; cin >> n;
	
	int fib1 = 0, fib2 = 1, copy;
	cout << fib1 << " " << fib2 << " ";
	
	for (int i = 2; i < n; i++){
		copy = fib1;
		fib1 = fib2;
		fib2 += copy;
		cout << fib2 << " ";
	}
}
