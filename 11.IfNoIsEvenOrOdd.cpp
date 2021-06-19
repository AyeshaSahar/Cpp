/*Check if entered value is even or odd */
#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Enter any integer:";
	cin>>x;
	if(x%2==0){
		cout<<"Entered number is even";
	}
	else{
		cout<<"Enetered number is odd";
	}
	return 0;
}
