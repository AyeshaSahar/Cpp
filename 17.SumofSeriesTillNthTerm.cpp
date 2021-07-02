/*Write a program to calculate the sum of: 1^2 + 2^2 + 3^2 + … + N^2*/

#include <iostream>

using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << " Input the value for nth term: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
	{
        sum += i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << " The sum of the above shown series is = " << sum << endl;
    return 0;
}

 /* Using while loop
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, sum = 0;
    cout << " Input the value for nth term: ";
    cin >> n;
    while (i++ <= n) 
	{
        sum += i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << " The sum of the above shown series is = " << sum << endl;
    return 0;
}
*/

