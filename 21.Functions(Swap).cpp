#include<iostream>
using namespace std;

void swap(int ,int );

void swap(int x,int y)
{
	int t;
	t = x;
	x = y; 
	y = t;
	cout<<" "<< x <<"   "<<y;
}

int main()
{
   
    int a,b;
    cout << "Value of number 1 before swaping: ";
    cin >> a;
    cout << "Value of number 1 before swaping: ";
    cin >> b;
    cout<<"\n After Swapping of Two Numbers: ";
    swap(a,b);
    return 0;
}


