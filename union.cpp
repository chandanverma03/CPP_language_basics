#include<iostream>
using namespace std;
union money{
	int rice;                    //only want to use one data type
	char car;                    // 
	float currency;
};
int main(){
	cout<<"\n\n\t\t\tWelcome to CPP Programming\n\n";
	union money m1;
	m1.rice = 34;
//	m1.car = 'l';
//	m1.currency = 232323;     //union is used to used only data type
	cout<<m1.rice;
}
