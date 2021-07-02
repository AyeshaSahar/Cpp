#include <iostream>
#include <math.h>

using namespace std;
 
void quad(int a, int b, int c);  //function declaration

int main()   
{ 
	int a,b,c;
	cout << "Enter the first number: "<<endl;
	cin >> a;
	cout << "Enter the second number: "<<endl;
	cin >> b;
	cout << "Enter the third number: "<<endl;
	cin >> c;
	quad(a, b,c);    //function call
}

void quad(int d, int e, int f) //function definition
{
	int y,disc;
	float z1, z2;
	y=(e*e)-(4*d*f);
	
	if (y >= 0)
	{
		disc = sqrt(y);
		z1=(-e + disc)/(2*f);
		z2=(-e - disc)/(2*f);
		cout<<"Real roots are: "<<z1<< "," <<z2;
	}
	else
	{
		cout << "There is no real root." << endl;
	}	
}

/*By reference method using pointers

#include <iostream>
#include <math.h>

using namespace std;

void quad(int *a,int *b,int *c);

int main()
{
	int a, b, c;
	cout << "Enter the first number: "<<endl;
	cin >> a;
	cout << "Enter the second number: "<<endl;
	cin >> b;
	cout << "Enter the third number: "<<endl;
	cin >> c;
	quad(&a, &b , &c);
}
void quad(int *d, int *e, int *f)
{
	int y,disc;
	float z1, z2;
	
	y=((*e)*(*e))-(4*(*d)*(*f));
	
	if (y >= 0)
	{
		disc = sqrt(y);
		z1=(-(*e) + disc)/(2*(*f));
		z2=(-(*e) - disc)/(2*(*f));
		cout<<"Real roots are: "<<z1<< "," <<z2;
	}
	
	else
	{
		cout << "There is no real root." << endl;
	}
	
}
*/
