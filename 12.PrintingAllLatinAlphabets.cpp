/*Write a program to display all the letters of the Latin alphabet*/

#include <iostream>
using namespace std;
int main()
{
    char a ='A',b ='a';
	cout <<"Uppercase Alphabets are: \n";
	while (a <='Z'){
	    cout << a << " \n";
		a += 1;}
	cout <<"Lowercase Alphabets are: \n";
	while (b <='z'){
	    cout << b <<" \n";
		b += 1;}
	return 0;
}  


/* Using for loop
#include <iostream>
using namespace std;
int main()
{
    char a,b;
	cout <<"Uppercase Alphabets are: \n";
	for (a='A'; a<='Z'; a++){
	cout <<a << " \n";}
	
	cout <<"Lowercase Alphabets are: \n";
	for (b='a'; b<='z'; b++){
	cout <<b <<" \n";}
	return 0;
}   */

