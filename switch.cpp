#include<iostream>
using namespace std;
int main(){
	cout<<"\n\n\t\t\tWelcome to CPP programming\n\n";
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	cout<<endl;
	switch(age){
		case 18: cout<<"You are 18 ";break;
		case 22: cout<<"You are 22 ";break;
		case 1: cout<<"you are 1 ";break;
		default: cout<<"You have entered wrong value";break;
	}
	return 0;
}
