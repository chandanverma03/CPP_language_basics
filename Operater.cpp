#include<iostream>
using namespace std;

int main(){
	cout<<"\t\t\t/n/nWelcome to CPP Programming\n\n";
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	cout<<endl;
	if(age<18){
		cout<<"You are not eligible for vote !";
	}
	else if(age<10){
		cout<<"You are kid ! "
	}
	else{
		cout<<"You are eligible for voting !"
	}
	return 0;
}
