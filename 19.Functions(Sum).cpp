#include <iostream>

using namespace std;

int sum(int , int );     //function declaration

int main()  //function call
{
	int a,b,s1;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	s1 =sum(a,b);
	cout<< "The sum is: " << s1;
	return 0;
}
int sum(int p, int q)   //function definition
{
	int sum1;
	sum1 = p+q;
	return sum1;
}



