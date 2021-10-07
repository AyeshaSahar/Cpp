#include <iostream>
using namespace std;

int main()
{
     int n, z, rem, reverse = 0;
     cout << "Enter any positive number: ";
     cin >> z;
     n = z;
     do{
         rem= z % 10;
         reverse = (reverse * 10) + rem;
         z = z / 10;
	} 
	 while (z != 0);

     cout << "\nThe reverse of the entered number is: " <<reverse<<endl;

     if (n == reverse)
         cout << "\nThe entered number is a palindrome!";
     else
         cout << "\nThe number is not a palindrome.";

    return 0;
}

