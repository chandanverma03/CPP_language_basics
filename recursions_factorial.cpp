//Recursions :   a function call itself untill the base condition will meet
//recursions gives overhead (it calls functions many times)
#include<iostream>
using namespace std;

int factorial(int n){
	if(n<=1){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	cout<<"\n\n\t\tWelcome to CPP Programming "<<endl;
	cout<<"\n\n";
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	cout<<"The factorial of "<<a<<" is "<<factorial(a);
	return 0;
}



