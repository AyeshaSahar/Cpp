/*Design a code that converts temperature in F to centigrade.*/

#include<iostream>
using namespace std;

int main()
{
	float F,C;
	cout<<"F=";
	cin>>F;
	C= 5*(F-32)/9;
	cout<<"C:"<<C;
	return 0;
}
