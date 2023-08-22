#include<iostream>
using namespace std;
int main(){
	/*Pointers : Data type which holds the address of other data type
	& it is (address of) operator 
	* -- it is (value at) operator  'dereference operator'
	*/
	int a=3;
	int* b = &a; //& --- (address of) operator  , * -- (value at)dereference operator 
	cout<<"The address of a is "<<b<<endl;
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The address of a is "<<*b<<endl;
	return 0;
	
	//Pointer to pointer 
	int** c = &b;
	cout<<"The address of b is "<<&b<<endl;
	cout<<"The address of b is "<<c<<endl;
	cout<<"The value at address c is "<<*c<<endl;
	cout<<"The value at address value_at(value_at(c)) is"<<
	
}
