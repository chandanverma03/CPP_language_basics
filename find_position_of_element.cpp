#include<iostream>
using namespace std;
int main(){
	cout<<"\n\n\t\tWelcome to CPP Programming\n\n";
	int arr[100], n, i, search, c=-1;
	cout<<"How many element do you want to enter : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter the element to search : ";
	cin>>search;
	for(i=0; i<n; i++){
		if(arr[i]==search){
			cout<<"Your value is found at the "<<i+1<<" position";
			c++;
		}
	}
	if(c==-1){
		cout<<"Your given value is not found ";
	}
	return 0;
}
