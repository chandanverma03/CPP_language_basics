#include<iostream>
using namespace std;
int sum(int a,int b){   //a and b are formal parameters
	int c = a+b;
	return c;
}
void g(){
	cout<<"Good morning !"<<endl;
}
int main(){
	
	cout<<"\n\n\t\t\tWelcome to CPP Programming\n\n";

	g();
		
	int num1,num2;
	cout<<"\nEnter first number : ";
	cin>>num1;
	cout<<"\nEnter second number : ";
	cin>>num2;
	//num1 and num2 are actual parameters 
	cout<<"\nThe sum is : "<<sum(num1,num2);
	return 0;
}

// Function prototype
//type fuction-name (arguments): 
//int sum(int a, int b);                       Acceptable
//int sum(int a,b);                          Not Acceptable
//int sum(int,int);                            Acceptable
