#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int i,sum=0;
	int a[10];
	cout<<"Enter elements in array a: "<<endl;
	for(i=0; i<10;i++){
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"sum is:"<<sum;
	return 0;
}
