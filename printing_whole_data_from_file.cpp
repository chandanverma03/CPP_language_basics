#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream chk;
	chk.open("chandan.txt");
	chk<<"My name is Chandan \n";
	chk<<"Currently pursuing my B.tech(CSE)\n";
	chk<<"I'm in my second year! \n";
	chk.close();
	
	string sentence;
	ifstream readout;
	readout.open("chandan.txt");
	while(readout.eof()==0){
//		readout>>sentence;                              //it will print the single word in each line 
		getline(readout,sentence);                      //it will print the whole sentence in one line   
		cout<<sentence<<endl;
	}
	readout.close();
	return 0;
}
