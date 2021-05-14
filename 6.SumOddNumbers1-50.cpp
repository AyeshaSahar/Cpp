#include<iostream>
using namespace std;

int main()
{
	int i,sum=0;
	for(i=1; i<=50; i=i+2){
		sum=sum+i;
	}
	cout<<"sum of odd numbers from 1 to 50 is:"<<sum;
	return 0;
}
