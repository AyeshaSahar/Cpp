/*Write a program to calculate the average of the integer numbers between 15 and 25*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i = 15,sum=0,count=0,average;
	while( i<= 25){
		sum = sum + i;
		i= i+1;
		count = count + 1;
		average = sum/count;
	}
	cout << "average:" << average;
	return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
	int i,sum=0,count=0,average;
	for(i=15;i <= 25; i++){
		sum = sum + i;
		count = count + 1;
		average = sum/count;
	}
	cout << "average:" << average;
	return 0;
}*/


