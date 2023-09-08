#include<iostream>
using namespace std;
int sum(int a, int b){
	cout<<"Using function with two arguments :->  ";
	return a+b;
}
int sum(int a, int b, int c){
	cout<<"Using function with three arguments :->  ";
	return a+b+c;
}
int main(){
	cout<<"\n\n\t\tWelcome to CPP Programming ";
	cout<<"\n\n";
	int a, b, c;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	cout<<"Enter the value of c : ";
	cin>>c;
	cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;
	cout<<"The sum of "<<a<<", "<<b<<" and "<<c<<" is "<<sum(a,b,c)<<endl;
	return 0;
}
