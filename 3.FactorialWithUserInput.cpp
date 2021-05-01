#include <iostream>
using namespace std;
int main()
{
	int num, factorial = 1;
	cout << "Enter any no:" ;
	cin >> num ;
	for (int a = 1; a <= num; a++)
	{
		factorial = factorial * a;
	}
	cout << "Factorial of the given number is = " << factorial << endl;
	return 0;
}

