/*Design an code that takes 3 numbers as an input and prints the greater number*/

#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if(a>b && a>c){
		cout<<"a is the largest"<<endl;
	}
	else if(b>a && b>c){
		cout<<"b is the largest"<<endl;
	}
	else{
		cout<<"c is the largest";
	}
	return 0;
}
