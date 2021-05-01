/*This is a simple program for quadratic formula that does not find whether the roots are imaginary or real, 
as it just focuses on calculation on basis of user input*/

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c,y,z1,z2;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Enter c:";
	cin>>c;
	y=(b*b)-(4*a*c);
	z1=(-b+sqrt(y))/(2*a);
	z2=(-b-sqrt(y))/(2*a);
	cout<<"z1:"<<z1<<endl;
	cout<<"z2:"<<z2<<endl;
	return 0;	
}
