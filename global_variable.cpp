#include<iostream>
using namespace std;
int global = 10;   //global variable is always written outside the main funciton
int main(){
	cout<<"\n\n\n\t\t\tWelcome to CPP Programming \n\n\n";
	
	cout<<"The value of global variable is : "<<global;
	return 0;
	
	//local variable have alwasys the higher precedence than global 
	//local >> global
}

//#include<iostream>
//using namespace std;
//int c = 50;
//int main(){
//	int a,b,c;
//	cout<<"Enter the value of a : ";
//	cin>>a;
//	cout<<endl;
//	cout<<"Enter the value of b : ";
//	cin>>b;
//	cout<<endl;
//	c = a + b;
//	cout<<"The sum is : "<<c;
//	cout<<"The global variable (c) is : "<<::c;  //::scope resolution operator is used for printing the global value
//	return 0;
//}
