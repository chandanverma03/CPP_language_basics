#include<iostream>
using namespace std;
inline int product(int a, int b){
//	static int c = 0;          //this execute only once
//	c = c+1;                   //next time this function is runm the valueof a c will be retained 
//	return a*b+c;
	return a*b;          
}

int main(){
	cout<<"\n\n\t\tWelcome to CPP Programming "<<endl;
	cout<<"\n\n"; 
	int a,b;
	cout<<"Enter the value for a : ";
	cin>>a;
	cout<<"Enter the value for b : ";
	cin>>b;	
	cout<<"The product of a and b is "<<product(a,b)<<endl; 
 	cout<<"The product of a and b is "<<product(a,b)<<endl; 
	cout<<"The product of a and b is "<<product(a,b)<<endl; 
	cout<<"The product of a and b is "<<product(a,b)<<endl; 
	cout<<"The product of a and b is "<<product(a,b)<<endl; 
	cout<<"The product of a and b is "<<product(a,b)<<endl; 
	cout<<"The product of a and b is "<<product(a,b)<<endl; 
	cout<<"The product of a and b is "<<product(a,b)<<endl; 
	return 0;
}








//Inline functions can be used only if it is need of performing small functions 

