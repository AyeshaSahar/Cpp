/*Write a program to display the odd numbers from 1 to 101, and also to display their sum.*/

#include <iostream>
using namespace std;
int main()
{
    int i = 0,sum=0;
	while( i++ <= 101){
		if (i%2 != 0){
			cout << i << "  ";
			sum +=i;
			i++;}	
	}
	cout << "sum is = " << sum;
	return 0;
}
/*
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,sum=0;
	for (i=1; i <= 101; i++){
		if (i%2 != 0){
			cout << i << "  ";
			sum = sum + i;}
	}
	cout << "sum is = " << sum;
	return 0;
} */


