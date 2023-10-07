#include<iostream>
using namespace std;
class A{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
	void getA(){
		cout<<"\t\t\tEnter the value of a : ";
		cin>>a;
		cout<<"\t\t\tEnter the value of b : ";
		cin>>b;
		cout<<"\t\t\tEnter the value of c : ";
		cin>>c;
	}
	void showA(){
		cout<<"\t\t\tValue of a is "<<a<<"\n";
		cout<<"\t\t\tValue of b is "<<b<<"\n";
		cout<<"\t\t\tValue of c is "<<c<<"\n";
	}
};
class B : private A{
	private:
		int d;
	protected:
		int e;
	public:
		int f;
	void getB(){
		getA();
		cout<<"\t\t\tEnter the value of d : ";
		cin>>d;
		cout<<"\t\t\tEnter the value of e : ";
		cin>>e;
		cout<<"\t\t\tEnter the value of f : ";
		cin>>f;
		cout<<"\n\n";
	}
	void showB(){
		showA();
		cout<<"\t\t\tValue of d is "<<d<<"\n";
		cout<<"\t\t\tValue of e is "<<e<<"\n";
		cout<<"\t\t\tValue of f is "<<f<<"\n";
	}
};

int main(){
	cout<<"\n\n\t\t\tWelcome to CPP Programming !\n\n";
	cout<<"\t\tHere is the code for inheritance problem ----> \n\n";
	B a1;
//	a1.getA();
	a1.getB();
//	a1.showA();
	a1.showB();
	
	return 0;
}
