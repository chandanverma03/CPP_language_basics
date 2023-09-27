#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string name;
	cout<<"Enter your name : ";
	getline(cin,name);
	ofstream ch("chandan.txt");                     //if this file is not available in your system then it automatically  
	ch<<name;                                           //create a new file of this name 
	ch.close();
	cout<<"Data saved in chandan.txt file !";
	return 0;
}
