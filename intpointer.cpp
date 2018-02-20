//pointer example

#include<iostream>
using namespace std;

int main(){
	int i = 0; // value of i 
	int* j = &i; // pointer, j points to i 
	cout << i << endl; // prints 
	//cout << j; prints address //
	cout << *j; // prints value of pointer

	return 0;
}