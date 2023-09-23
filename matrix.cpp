#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j,a[10][10];
	cout<<"Enter the number of rows and columns of the matrix : ";
	cin>>m>>n;
	cout<<"Enter the array elements : ";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>a[j][i];
		}
	}
	cout<<"Matrix : \n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[j][i]<<" ";
		}
	cout<<"\n";

	}
	return 0;
}
