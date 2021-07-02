#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i;
	int a[10];
	cout<<"Enter elements in array a: "<<endl;
	for(i=0; i<10;i++){
		cin>>a[i];
	}
	
	cout<<"Entered elements in ascending order are: "<<endl;
	for(i=0; i=<10;i++){
		cout<<a[i]<<endl;
	}

	cout<<"Entered elements in descending order are: "<< endl;
	for(i=10;i>=0;i--){
		cout<<a[i]<<endl;
	}
	return 0;
}


