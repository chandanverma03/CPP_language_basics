#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string s;
	ifstream ch("chandan.txt");            //the file name you are using should be present in your system!
	getline(ch,s);                         //taking the whole sentence
	cout<<s;
	ch.close();
	return 0;
}
