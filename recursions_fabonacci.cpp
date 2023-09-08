#include<iostream>
int fabonacci(int n){
	if(n<2){
		return 1;
	}
	return fabonacci(n-1)+fabonacci(n-2);
}
int main(){
	std::cout<<"\n\n\t\tWelcome to CPP Programming "<<std::endl;
	std::cout<<"\n\n";
	int a;
	std::cout<<"Enter a number : ";
	std::cin>>a;
	std::cout<<"The value of  fabonacci series at "<<a<<" is "<<fabonacci(a);
	return 0;
}
