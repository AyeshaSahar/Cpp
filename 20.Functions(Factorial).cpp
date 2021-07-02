#include<iostream>

using namespace std;

int factorial(int n);  //function declaration

int main()  //function call
{
	int n1,fact;
	cout <<"Enter the number whose factorial has to be calculated: ";
	cin >> n1;
	fact=factorial(n1);
	cout << "The factorial of " << n1 << " is : " << fact << endl;
	return 0;
}

int factorial(int n)
{
	int i=0,fact=1;
	if(n<=1)
	{
	return(1);
	}
	else
	{
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
	}
	return(fact);
	}
}

	


